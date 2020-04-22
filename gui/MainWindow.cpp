#include <wx/filedlg.h>
#include "MainWindow.h"

typedef std::pair<MainWindow::ResponseType, std::string> HandlerSubPair;
typedef std::pair<wxTreeItemId, HandlerSubPair> HandlerPair;

// Main window initialization
void MainWindow::renderWindow(wxShowEvent& event) {
    nodeControl->AddRoot("storyboard");
    nodeControl->AppendItem(nodeControl->GetRootItem(), "view");
    responseHandlerEditor->SetValue(
            "@Override\n"
            "public void handle(Update update) {\n"
            "   \n"
            "}"
            );
    _doc.Parse(_projectTemplate);
    updateTree();
    disableAllEditing();
}

// Tree item selected
void MainWindow::nodeSelected(wxTreeEvent &event) {
    if (nodeControl->GetRootItem() != event.GetItem()) {
        viewNameEditor->Enable(true);
        responseTextEditor->Enable(responseType->GetStringSelection() == "Text");
        responseHandlerEditor->Enable(responseType->GetStringSelection() == "Custom Response");
        responseType->Enable(true);
        viewNameEditor->SetValue(nodeControl->GetItemText(nodeControl->GetSelection()).ToStdString().erase(0, 6));
        if (nodeControl->IsBold(nodeControl->GetSelection())) {
            responseType->SetSelection(1);
            responseHandlerEditor->SetValue(_handlers.at(nodeControl->GetSelection()).second);
        } else {
            responseType->SetSelection(0);
            responseTextEditor->SetValue(_handlers.at(nodeControl->GetSelection()).second);
        }
        responseTextEditor->Enable(responseType->GetStringSelection() == "Text");
        responseHandlerEditor->Enable(responseType->GetStringSelection() == "Custom Response");
    } else {
        viewNameEditor->Clear();
        disableAllEditing();
    }
}

// Radio button selected
void MainWindow::responseTypeChanged(wxCommandEvent &event) {
    nodeControl->SetItemBold(nodeControl->GetSelection(), responseType->GetStringSelection() == "Custom Response");
    responseTextEditor->Enable(responseType->GetStringSelection() == "Text");
    responseHandlerEditor->Enable(responseType->GetStringSelection() == "Custom Response");
    if (responseType->GetStringSelection() == "Custom Response") {
        _handlers.at(nodeControl->GetSelection()).first = ResponseType::CUSTOM;
        _handlers.at(nodeControl->GetSelection()).second = responseHandlerEditor->GetValue();
    } else {
        _handlers.at(nodeControl->GetSelection()).first = ResponseType::TEXT;
        _handlers.at(nodeControl->GetSelection()).second = responseTextEditor->GetValue();
    }
}

// View name edited
void MainWindow::viewNameChanged(wxCommandEvent &event) {
    if (nodeControl->GetRootItem() != nodeControl->GetSelection()) {
        nodeControl->SetItemText(nodeControl->GetSelection(), "view: " + viewNameEditor->GetValue());
    }
}

// Response text edited
void MainWindow::responseTextChanged(wxCommandEvent &event) {
    _handlers.at(nodeControl->GetSelection()).second = responseTextEditor->GetValue();
    //printf("%s\n", _handlers.at(nodeControl->GetSelection()).second.c_str());
}

// Add new view
void MainWindow::addNode(wxCommandEvent &event) {
    auto _id = nodeControl->AppendItem(nodeControl->GetSelection(), "view: view" + std::to_string(nodeControl->GetCount()));
    _handlers.insert(HandlerPair(_id, HandlerSubPair(ResponseType::TEXT, "")));
}

// Delete a view
void MainWindow::deleteNode(wxCommandEvent &event) {
    if (nodeControl->GetRootItem() != nodeControl->GetSelection()) {
        _handlers.erase(nodeControl->GetSelection());
        nodeControl->Delete(nodeControl->GetSelection());
    }
}

// Show information
void MainWindow::infoClicked(wxCommandEvent &event) {
    auto dialog = new HelpDialog(this);
    dialog->ShowWindowModal();
    dialog->Destroy();
}

// Open an existing project
void MainWindow::open(wxCommandEvent &event) {
    auto dialog = new wxFileDialog(
            this, _("Choose a project file to open"), wxEmptyString, wxEmptyString,
            _("XML Project (*.xml)|*.xml"),
            wxFD_OPEN, wxDefaultPosition);
    if (dialog->ShowModal() == wxID_OK) {
        _doc.LoadFile(dialog->GetPath());
        updateTree();
    }
    dialog->Destroy();
}

// Save the project (XML)
void MainWindow::save(wxCommandEvent &event) {
    modifyDoc();
    _doc.Print();
    auto dialog = new SaveDialog(this);
    dialog->setDoc(&_doc);
    dialog->ShowModal();
    dialog->Destroy();
}

// Custom java handler edited
void MainWindow::customResponseChanged(wxKeyEvent &event) {
    _handlers.at(nodeControl->GetSelection()).second = responseHandlerEditor->GetValue();
}

// Private methods
// Apply changes to the XMLDocument
void MainWindow::modifyDoc() {
    _doc.Clear();
    _doc.InsertFirstChild(_doc.NewElement(nodeControl->GetItemText(nodeControl->GetRootItem())));
    if (nodeControl->HasChildren(nodeControl->GetRootItem())) {
        auto cookie = wxTreeItemIdValue();
        auto child = nodeControl->GetFirstChild(nodeControl->GetRootItem(), cookie);
        recursiveWriting(_doc.RootElement(), child);
    }
    //_doc.SaveFile("cache.xml");
}

// Recursively iterate through tree nodes
void MainWindow::recursiveWriting(tinyxml2::XMLElement *elem, wxTreeItemId id) {
    while (id.IsOk()) {
        auto cElem = _doc.NewElement("view");
        cElem->SetAttribute("name", nodeControl->GetItemText(id).ToStdString().erase(0, 6).c_str());
        if (nodeControl->IsBold(id))
            cElem->SetAttribute("handlerType", "custom");
        else
            cElem->SetAttribute("handlerType", "text");
        elem->InsertEndChild(cElem);
        auto handler = _doc.NewElement("handler");
        cElem->InsertEndChild(handler);
        auto text = _doc.NewText(_handlers.at(id).second.c_str());
        handler->InsertFirstChild(text);
        if (nodeControl->HasChildren(id)) {
            auto cookie = wxTreeItemIdValue();
            auto child = nodeControl->GetFirstChild(id, cookie);
            recursiveWriting(cElem, child);
        }
        id = nodeControl->GetNextSibling(id);
    }
}

// Reload the node tree
void MainWindow::updateTree() {
    nodeControl->DeleteAllItems();
    _handlers.clear();
    tinyxml2::XMLElement *root = _doc.RootElement();
    nodeControl->AddRoot(root->Name());
    recursiveExtraction(root, nodeControl->GetRootItem());
}

// Recursively iterate through XML elements
void MainWindow::recursiveExtraction(tinyxml2::XMLElement * elem, wxTreeItemId id) {
    for(auto child = elem->FirstChildElement("view"); child; child = child->NextSiblingElement("view")) {
        auto _id = nodeControl->AppendItem(id, "view: " + std::string(child->Attribute("name")));
        std::string handlerText;
        if (!child->FirstChildElement("handler")->NoChildren())
            handlerText = child->FirstChildElement("handler")->GetText();
        if (std::strcmp(child->Attribute("handlerType"), "custom") == 0) {
            nodeControl->SetItemBold(_id);
            _handlers.insert(HandlerPair(_id, HandlerSubPair(ResponseType::CUSTOM, handlerText)));
        } else {
            _handlers.insert(HandlerPair(_id, HandlerSubPair(ResponseType::TEXT, handlerText)));
        }
        if (child->FirstChildElement("view")) {
            recursiveExtraction(child, _id);
        }
    }
}

// Disable all editable fields
void MainWindow::disableAllEditing() {
    viewNameEditor->Enable(false);
    responseTextEditor->Enable(false);
    responseHandlerEditor->Enable(false);
    responseType->Enable(false);
}

// Help dialog
// Init help window
void HelpDialog::renderWindow(wxShowEvent &event) {
    htmlView->SetPage(_helpPage);
}

// Save Dialog
// Init save window
void SaveDialog::renderDialog(wxShowEvent &event) {
    pathEntry->SetValue(getenv("HOME"));
}

// Write the project
void SaveDialog::saveProject(wxCommandEvent &event) {
    std::string filename = nameEntry->GetValue().ToStdString();
    std::string path = pathEntry->GetValue().ToStdString();
    _doc->SaveFile(std::string (path + "/" + filename + ".xml").c_str());
    Close();
}

// Accept an XMLDocument* from parent
void SaveDialog::setDoc(tinyxml2::XMLDocument *doc) {
    _doc = doc;
}
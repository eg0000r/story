#include <map>
#include "../tinyxml2/tinyxml2.h"
#include "GenMainWindow.h"

// Main window
class MainWindow : public gen::MainWindow {
public:
    // Inherit the constructor
    using gen::MainWindow::MainWindow;

    // Override the generated UI handlers
    void renderWindow(wxShowEvent& event) override;
    void responseTypeChanged(wxCommandEvent& event) override;
    void nodeSelected(wxTreeEvent& event) override;
    void responseTextChanged(wxCommandEvent& event) override;
    void viewNameChanged(wxCommandEvent& event) override;
    void addNode(wxCommandEvent& event) override;
    void deleteNode(wxCommandEvent& event) override;
    void infoClicked(wxCommandEvent& event) override;
    void open(wxCommandEvent& event) override;
    void save(wxCommandEvent& event) override;
    void customResponseChanged(wxKeyEvent& event) override;

    enum ResponseType {
        TEXT, CUSTOM
    };

private:
    // Private utility methods
    void disableAllEditing();
    void updateTree();
    void recursiveExtraction(tinyxml2::XMLElement * elem, wxTreeItemId id);
    void modifyDoc();
    void recursiveWriting(tinyxml2::XMLElement * elem, wxTreeItemId id);

    // Handler metadata
    std::map<wxTreeItemId, std::pair<ResponseType, std::string>> _handlers;

    // XML data
    tinyxml2::XMLDocument _doc;

    // XML project template literal
    const char * _projectTemplate = "<?xml version=\"1.0\" encoding=\"UTF-8\" ?>"
                                    "<storyboard>"
                                    "<view name=\"view1\" handlerType=\"text\">"
                                    "<handler>Hello! I am bot</handler>"
                                    "</view>"
                                    "</storyboard>";
};

// Info dialog
class HelpDialog : public gen::HelpDialog {
public:
    // Inherit the constructor
    using gen::HelpDialog::HelpDialog;

    // Override the generated UI handler
    void renderWindow(wxShowEvent& event) override;

private:
    // Info HTML content
    const char * _helpPage = "<!DOCTYPE html>"
                             "<html>"
                             "<body>"
                             "<h1 style=\"text-align: center\">StoryBuilder</h1>"
                             "<p style=\"text-align: left; font-family: monospace; background-color: gainsboro\">"
                             "@Override<br/>"
                             "public void (Update update) {<br/>"
                             "// Your code here<br/>"
                             "}"
                             "</p>"
                             "</body>"
                             "</html>";
};

class SaveDialog : public gen::SaveDialog {
public:
    using gen::SaveDialog::SaveDialog;

    void setDoc(tinyxml2::XMLDocument * doc);


private:
    void renderDialog( wxShowEvent& event ) override;
    void saveProject( wxCommandEvent& event ) override;

    tinyxml2::XMLDocument * _doc;
};
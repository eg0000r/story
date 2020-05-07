#include "App.h"
#include "gui/MainWindow.h"

IMPLEMENT_APP(App)

App::App() {
    wxInitAllImageHandlers();
}

App::~App() {

}

bool App::OnInit() {
    auto frame = new MainWindow((wxWindow *) nullptr);
    frame->Show();
    SetTopWindow(frame);
    return true;
}
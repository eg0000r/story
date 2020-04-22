#include <wx/wx.h>

class App : public wxApp {
public:
    App();
    virtual ~App();
    virtual bool OnInit();
};

DECLARE_APP(App)
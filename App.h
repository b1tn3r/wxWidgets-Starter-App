// For compilers that support precompilation
#include <wx/wxprec.h>
#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif

#include "Frame.h"

class App : public wxApp
{
public:
    App();
    ~App();

    virtual bool OnInit();

private:
    Frame* mFrame = nullptr;
};

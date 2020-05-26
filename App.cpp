#include "App.h"

wxIMPLEMENT_APP(App);

App::App()
{
}

App::~App()
{
}

bool App::OnInit()
{
    mFrame = new Frame("Blank Starter Project", wxPoint(30, 30), wxSize(800, 600));
    mFrame->Show(true);
    return true;
}

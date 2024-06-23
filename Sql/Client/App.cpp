#include "App.h"
#include "MainFrame.h"

bool App::OnInit() {
    // Create and show the main application window (MainFrame)
    MainFrame* frame = new MainFrame("User Login and Client Management");
    frame->Show(true);
    return true;
}

// Define wxApp instance and entry point of the application
wxIMPLEMENT_APP(App);

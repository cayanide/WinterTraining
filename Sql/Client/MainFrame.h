#ifndef MAINFRAME_H
#define MAINFRAME_H

#include <wx/wx.h>
#include "DatabaseManager.h"

class MainFrame : public wxFrame {
public:
    MainFrame(const wxString& title);

private:
    DatabaseManager dbManager;

    // Event handlers
    void OnLogin(wxCommandEvent& event);
    void OnSignUp(wxCommandEvent& event);
    void OnAddClient(wxCommandEvent& event);

    wxDECLARE_EVENT_TABLE();
};

#endif // MAINFRAME_H

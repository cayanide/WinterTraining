#include "MainFrame.h"

MainFrame::MainFrame(const wxString& title)
    : wxFrame(NULL, wxID_ANY, title, wxDefaultPosition, wxSize(800, 600)) {

    // Create UI components (text controls, buttons, etc.)
    wxPanel* panel = new wxPanel(this);

    wxStaticText* usernameLabel = new wxStaticText(panel, wxID_ANY, "Username:");
    wxTextCtrl* usernameInput = new wxTextCtrl(panel, wxID_ANY, "", wxDefaultPosition, wxSize(200, -1));

    wxStaticText* passwordLabel = new wxStaticText(panel, wxID_ANY, "Password:");
    wxTextCtrl* passwordInput = new wxTextCtrl(panel, wxID_ANY, "", wxDefaultPosition, wxSize(200, -1), wxTE_PASSWORD);

    wxButton* loginButton = new wxButton(panel, wxID_ANY, "Login");
    wxButton* signUpButton = new wxButton(panel, wxID_ANY, "Sign Up");

    // Layout
    wxBoxSizer* vbox = new wxBoxSizer(wxVERTICAL);
    vbox->Add(usernameLabel, 0, wxALL, 10);
    vbox->Add(usernameInput, 0, wxEXPAND | wxALL, 10);
    vbox->Add(passwordLabel, 0, wxALL, 10);
    vbox->Add(passwordInput, 0, wxEXPAND | wxALL, 10);
    vbox->Add(loginButton, 0, wxALL | wxALIGN_CENTER_HORIZONTAL, 10);
    vbox->Add(signUpButton, 0, wxALL | wxALIGN_CENTER_HORIZONTAL, 10);

    panel->SetSizer(vbox);

    // Bind events
    loginButton->Bind(wxEVT_BUTTON, &MainFrame::OnLogin, this);
    signUpButton->Bind(wxEVT_BUTTON, &MainFrame::OnSignUp, this);
}

void MainFrame::OnLogin(wxCommandEvent& event) {
    // Handle login button click
    // Retrieve username and password, authenticate user
    // Show client list for authenticated user
}

void MainFrame::OnSignUp(wxCommandEvent& event) {
    // Handle sign-up button click
    // Show sign-up dialog, add new user to database
}

void MainFrame::OnAddClient(wxCommandEvent& event) {
    // Handle add client button click
    // Show dialog to input client details, add client to database
}

wxBEGIN_EVENT_TABLE(MainFrame, wxFrame)
    EVT_BUTTON(wxID_ANY, MainFrame::OnLogin)
wxEND_EVENT_TABLE()

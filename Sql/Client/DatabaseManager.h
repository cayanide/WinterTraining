#ifndef DATABASEMANAGER_H
#define DATABASEMANAGER_H

#include <mysql/mysql.h> // Include MySQL headers

class DatabaseManager {
public:
    DatabaseManager();
    ~DatabaseManager();

    bool Connect(const wxString& host, const wxString& user, const wxString& password, const wxString& database);
    void Disconnect();

    bool AuthenticateUser(const wxString& username, const wxString& password);

    // Methods to retrieve and update client data
};

#endif // DATABASEMANAGER_H

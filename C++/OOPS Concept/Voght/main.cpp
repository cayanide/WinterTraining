#include <iostream>
#include <mysql_driver.h>
#include <mysql_connection.h>
#include <cppconn/statement.h>
#include <cppconn/resultset.h>
#include <cppconn/prepared_statement.h>
#include <iomanip>

using namespace std;
using namespace sql;

void printWelcomeMessage() {
    cout << "*****************************************************" << endl;
    cout << "*                                                   *" << endl;
    cout << "*                 Welcome to Vought                 *" << endl;
    cout << "*                                                   *" << endl;
    cout << "*****************************************************" << endl;
    cout << endl;
}

void createDatabaseAndTables() {
    try {
        sql::mysql::MySQL_Driver *driver = sql::mysql::get_mysql_driver_instance();
        unique_ptr<sql::Connection> con(driver->connect("tcp://127.0.0.1:3306", "root", "acer@23!"));

        unique_ptr<sql::Statement> stmt(con->createStatement());
        stmt->execute("CREATE DATABASE IF NOT EXISTS user_login");
        stmt->execute("USE user_login");
        stmt->execute("CREATE TABLE IF NOT EXISTS SuperheroLogin (id INT AUTO_INCREMENT PRIMARY KEY, username VARCHAR(50) NOT NULL, password VARCHAR(50) NOT NULL)");
        stmt->execute("CREATE TABLE IF NOT EXISTS ConsumerLogin (id INT AUTO_INCREMENT PRIMARY KEY, username VARCHAR(50) NOT NULL, password VARCHAR(50) NOT NULL)");
    } catch (sql::SQLException &e) {
        cerr << "ERROR: SQLException: " << e.what() << endl;
    }
}

void superheroLogin(sql::Connection *con) {
    string username, password;
    cout << "Enter Superhero username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;

    try {
        unique_ptr<sql::PreparedStatement> pstmt(con->prepareStatement("SELECT * FROM SuperheroLogin WHERE username = ? AND password = ?"));
        pstmt->setString(1, username);
        pstmt->setString(2, password);
        unique_ptr<sql::ResultSet> res(pstmt->executeQuery());

        if (res->next()) {
            cout << "Superhero login successful!" << endl;
        } else {
            cout << "Invalid username or password for Superhero." << endl;
        }
    } catch (sql::SQLException &e) {
        cerr << "ERROR: SQLException: " << e.what() << endl;
    }
}

void consumerLogin(sql::Connection *con) {
    string username, password;
    cout << "Enter Consumer username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;

    try {
        unique_ptr<sql::PreparedStatement> pstmt(con->prepareStatement("SELECT * FROM ConsumerLogin WHERE username = ? AND password = ?"));
        pstmt->setString(1, username);
        pstmt->setString(2, password);
        unique_ptr<sql::ResultSet> res(pstmt->executeQuery());

        if (res->next()) {
            cout << "Consumer login successful!" << endl;
        } else {
            cout << "Invalid username or password for Consumer." << endl;
        }
    } catch (sql::SQLException &e) {
        cerr << "ERROR: SQLException: " << e.what() << endl;
    }
}

int main() {
    int userChoice;

    // Print the welcoming message
    printWelcomeMessage();

    createDatabaseAndTables();

    sql::mysql::MySQL_Driver *driver = sql::mysql::get_mysql_driver_instance();
    unique_ptr<sql::Connection> con(driver->connect("tcp://127.0.0.1:3306/user_login", "root", "acer@23!"));

    cout << "Choose your login type:" << endl;
    cout << "1. Superhero Login" << endl;
    cout << "2. Consumer Login" << endl;
    cout << "Enter your choice (1 or 2): ";
    cin >> userChoice;

    switch (userChoice) {
        case 1:
            superheroLogin(con.get());
            break;
        case 2:
            consumerLogin(con.get());
            break;
        default:
            cout << "Invalid choice. Please enter 1 or 2." << endl;
            break;
    }

    return 0;
}

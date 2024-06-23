#include <iostream>
#include <mysql.h>
#include <string>

// MySQL connection details
const char* host = "localhost";
const char* user = "root";
const char* password = "acer@23!";
const char* database_name = "Info";

bool getdata(const std::string& username , MYSQL* conn){
string query = "SELECT * FROM Data WHERE username = '" + username + "';";


}
// Function to check if username exists in the Users table
bool checkUsernameExists(const std::string& username, MYSQL* conn) {
    std::string query = "SELECT COUNT(*) FROM Users WHERE username = '" + username + "';";
    if (mysql_query(conn, query.c_str()) != 0) {
        std::cerr << "Error checking username: " << mysql_error(conn) << std::endl;
        return false;
    }

    MYSQL_RES* result = mysql_store_result(conn);
    if (!result) {
        std::cerr << "Error retrieving result: " << mysql_error(conn) << std::endl;
        return false;
    }

    MYSQL_ROW row = mysql_fetch_row(result);
    int count = std::stoi(row[0]);

    mysql_free_result(result);

    return (count > 0);
}

// Function to create a new user
void createUser(MYSQL* conn) {
    std::string email, username, password;

    // Prompt user for email, username, and password
    std::cout << "Enter your email: ";
    std::cin >> email;

    do {
        std::cout << "Enter your desired username: ";
        std::cin >> username;

        if (checkUsernameExists(username, conn)) {
            std::cout << "Username already exists. Please choose a different username." << std::endl;
        }
    } while (checkUsernameExists(username, conn));

    std::cout << "Enter your password: ";
    std::cin >> password;

    // Insert new user into Users table
    std::string query = "INSERT INTO Users (email, username, password) VALUES ('" + email + "', '" + username + "', '" + password + "');";
    if (mysql_query(conn, query.c_str()) != 0) {
        std::cerr << "Error creating user: " << mysql_error(conn) << std::endl;
    } else {
        std::cout << "User created successfully!" << std::endl;
        
    }
}

// Function to authenticate user login
bool authenticateUser(MYSQL* conn) {
    std::string username, password;

    // Prompt user for username and password
    std::cout << "Enter your username: ";
    std::cin >> username;

    std::cout << "Enter your password: ";
    std::cin >> password;

    // Check if username and password match in the Users table
    std::string query = "SELECT COUNT(*) FROM Users WHERE username = '" + username + "' AND password = '" + password + "';";
    if (mysql_query(conn, query.c_str()) != 0) {
        std::cerr << "Error authenticating user: " << mysql_error(conn) << std::endl;
        return false;
    }

    MYSQL_RES* result = mysql_store_result(conn);
    if (!result) {
        std::cerr << "Error retrieving result: " << mysql_error(conn) << std::endl;
        return false;
    }

    MYSQL_ROW row = mysql_fetch_row(result);
    int count = std::stoi(row[0]);

    mysql_free_result(result);

    return (count > 0);
}

int main() {
    MYSQL* conn = mysql_init(NULL);
    if (conn == NULL) {
        std::cerr << "Error initializing MySQL connection" << std::endl;
        return 1;
    }

    // Connect to MySQL database
    if (mysql_real_connect(conn, host, user, password, database_name, 0, NULL, 0) == NULL) {
        std::cerr << "Error connecting to MySQL database: " << mysql_error(conn) << std::endl;
        mysql_close(conn);
        return 1;
    }
cout<<"Welcome To program To See Your Targets Today Choose an Option"<<endl;

    int choice;

    cout << "1. Login\n2. Sign Up\nChoose an option: ";
    cin >> choice;

    switch (choice) {
        case 1:
            if (authenticateUser(conn)) {
                std::cout << "Login successful!" << std::endl;
                bool logout=false;
                while(logout==false){
                 bool logout=  getdata(conn);
                }
            } else {
                std::cout << "Invalid credentials. Login failed." << std::endl;
            }
            break;
        case 2:
            createUser(conn);
            break;
        default:
            std::cout << "Invalid choice" << std::endl;
            break;
    }



    // Close MySQL connection
    mysql_close(conn);

    return 0;
}

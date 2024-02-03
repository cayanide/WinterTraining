#include <iostream>
using namespace std;
/**
 * @brief Main function
 * @param argc argument count
 * @param argv argument vector
 * @return 0 on success, non-zero on failure
 */
int main(int argc, char* argv[]) {
    int n = 0; /**< Variable to store user input */
    cout << "Enter your Number to check ODD or EVEN" << endl;
    cin >> n; /**< Read user input into n */
    if (n % 2 == 0) {
        cout << "YES , It's Even Number" << endl;
    } else {
        cout << "NO, It's Odd Number" << endl;
    }
    return 0;
}
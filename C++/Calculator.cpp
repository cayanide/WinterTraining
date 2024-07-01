#include <iostream>
#include <vector>
#include <thread>
#include <chrono>
#include <limits> // for numeric_limits

using namespace std;

// Function to display a loading animation
void loadingAnimation() {
    vector<char> chars;
    chars.push_back('|');
    chars.push_back('/');
    chars.push_back('-');
    chars.push_back('\\');
  int i = 0;
  while (true) {
    // Move cursor up one position
    cout << "\033[A";
    cout << chars[i];
    this_thread::sleep_for(chrono::milliseconds(100));
    i = (i + 1) % chars.size();
  }
}

int main() {
  // Disable output buffering (Linux/macOS)
  setvbuf(stdout, NULL, _IONBF, 0);

  double num1, num2;
  char operation;

  cout << "Welcome to the Animated Calculator!" << endl;

  // Thread for loading animation
  thread animationThread(loadingAnimation);

  // Wait for animation to start
  this_thread::sleep_for(chrono::milliseconds(200));

  // Stop animation thread
  animationThread.detach();

  while (true) {
    cout << "Enter first number: ";
    if (!(cin >> num1)) {
      // Handle invalid input (e.g., percentage sign)
      cin.clear(); // Clear the error state
      cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
      cout << "Invalid input. Please enter a number." << endl;
      continue;
    }

    cout << "Enter an operator (+, -, *, /): ";
    if (!(cin >> operation)) {
      // Handle invalid input (e.g., additional characters)
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      cout << "Invalid input. Please enter a valid operator." << endl;
      continue;
    }

    cout << "Enter second number: ";
    if (!(cin >> num2)) {
      // Handle invalid input (e.g., percentage sign)
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      cout << "Invalid input. Please enter a number." << endl;
      continue;
    }

    // Valid input received, proceed with calculation

    // ... rest of your code for calculation and result display

    break; // Exit the loop after successful input
  }

  return 0;
}

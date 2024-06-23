#include <iostream>

using namespace std;

class Solution {
public:
  bool isPalindrome(int x) {
    
    if (x < 0 || (x % 10 == 0 && x != 0)) {
      return false;
    }

    int reversed = 0;
    while (x > reversed) {
      
      int digit = x % 10;
     
      reversed = reversed * 10 + digit;
    
      x /= 10;
    }

  
    return x == reversed || x == reversed / 10;
  }
};

int main() {
  int x;
 cin >> x;

  bool is_palindrome = Solution().isPalindrome(x);  

  if (is_palindrome) {
    cout << x << " is a palindrome." << endl;
  } else {
    cout << x << " is not a palindrome." << endl;
  }

  return 0;
}

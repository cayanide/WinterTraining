
#include <iostream>
using namespace std;


int main() {

    int n,i,j;
    cout << "Enter a number: ";
 cin >> n;

   
    for (i=1; i<= n; i++) {
        
         for (int j = 1; j<= n-i; j++) {
            cout << " ";
        }
        
         for (int j = 1; j <= i; j++) {
            cout << i << " ";
        }
        
        cout << endl;
    }

    for (int i = n-1; i>=1; i--) {
        
        for (int j = 1; j<= n-i; j++) {
            
            cout << " ";
        }
        
        for (int j = 1; j <= i; j++) {
            
            cout << i << " ";
        }
        
        cout << endl;
    }

    
}

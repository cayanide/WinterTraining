#include <vector>
#include <string>
#include <iostream>

using namespace std;



int main() {
    int n, q;
    cin >> n >> q;
    
   vector<string> queries(q);
    for (int i = 0; i < q; ++i) {
        getline(cin, queries[i]);
    }

   

    return 0;
}

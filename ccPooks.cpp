#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        if (n == 1) {
            cout << 1 << endl;
        } else if (n < 4) {
            cout << n - 1 << endl;
        } else {
            cout << n << endl;
        }
    }
    
    return 0;
}


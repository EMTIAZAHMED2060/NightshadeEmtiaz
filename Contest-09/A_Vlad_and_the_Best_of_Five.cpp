#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        
        string s;
        cin >> s;
        
        int cA = 0, cB = 0;
        for (char ch : s) {
            if (ch == 'A') {
                cA++;
            } else {
                cB++;
            }
        }
        
        if (cA > cB) {
            cout << "A\n";
        } else {
            cout << "B\n";
        }
    }
    return 0;
}

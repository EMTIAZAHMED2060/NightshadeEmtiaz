#include <iostream>
#include <string>
#include <climits>

using namespace std;

void constructString() {
    int n;
    cin >> n;
    string str;
    cin >> str;
    int a = INT_MAX, b = INT_MIN; // Initialize with extreme values
    
    for (int i = 0; i < n; i++) {
        if (str[i] == 'B') {
            a = min(a, i);
            b = max(b, i);
        }
    }
    
    if (a == INT_MAX || b == INT_MIN) {
        // No 'B' found
        cout << "1" << endl;
    } else {
        cout << (b - a + 1) << endl;
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        constructString();
    }

    return 0;
}

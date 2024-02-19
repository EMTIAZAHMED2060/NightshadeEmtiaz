#include <iostream>
#include <vector>
#include <map>
using namespace std;

void T() {
    int n;     cin >> n;
    vector<string> s(n);
    for (int i = 0; i < n; ++i) {
        cin >> s[i];
    }
    map<int, int> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (s[i][j] == '1') m[i]++;          
        }
        if (i > 0 and m[i] > 0 and m[i] == m[i - 1]) {
            cout << "SQUARE" << endl;
            return;
        }
    }
    cout << "TRIANGLE" << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        T();
    }
    return 0;
}

#include <iostream>
using namespace std;

#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve() {
    int n;
    cin >> n;
    
    string a, b, c;
    cin >> a >> b >> c;

    for (int i = 0; i < n; i++) {
        if (a[i] == c[i] || b[i] == c[i])
            continue;
        else {
            yes;
            return;
        }
    }
    no;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}

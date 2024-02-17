#include <iostream>
using namespace std;

void solve() {
    long long n, m;
    cin >> n >> m;
    long long ans = n * (m / 2);
    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}

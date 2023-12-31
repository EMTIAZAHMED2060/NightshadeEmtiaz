/**************************************************/
/*           Author : Nightshade Emtiaz             */
/*        Github : github.com/NightshadeEmtiaz     */
/**************************************************/
#include <iostream>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    int ans = 1, p; 
    for (int i = 0; i < n; i++) {
        cin >> p;
        ans *= p;
    }
    if (2023 % ans == 0) {
        cout << "YES" << endl;
        cout << 2023 / ans << " ";
        for (int i = 1; i < k; i++) {
            cout << 1 << " ";
        }
        cout << endl; 
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}

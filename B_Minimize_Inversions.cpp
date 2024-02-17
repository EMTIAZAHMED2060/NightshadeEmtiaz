#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int test_cases;
    cin >> test_cases;

    while (test_cases--) {
        int n;
        cin >> n;

        vector<int> a(n), b(n);

        for (int i = 0; i < n + n; i++) {
            cin >> (i < n ? a[i] : b[a[i-n]]);
        }

        sort(a.begin(), a.end());

        for (auto it : a) {
            if (it != 0) {
                cout << it << " ";
            }
        }
        cout << "\n";

        for (auto it : b) {
            if (it != 0) {
                cout << it << " ";
            }
        }

        cout << "\n";
    }

    return 0;
}
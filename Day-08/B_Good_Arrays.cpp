#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        unordered_set<int> distinctElements;

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            distinctElements.insert(a[i]);
        }

        if (distinctElements.size() > 1) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}

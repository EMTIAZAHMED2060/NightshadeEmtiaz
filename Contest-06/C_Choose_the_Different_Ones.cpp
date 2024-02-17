#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <algorithm>

using namespace std;

void TEST() {
    long long n, m, k;
    cin >> n >> m >> k;

    vector<long long> a(n), b(m);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    unordered_set<long long> sa, sb, com;

    for (int i = 0; i < n; i++) {
        if (a[i] <= k) {
            sa.insert(a[i]);
        }
    }
    for (int i = 0; i < m; i++) {
        if (b[i] <= k) {
            sb.insert(b[i]);
        }
    }
    for (auto x : sa) {
        if (sb.find(x) != sb.end()) {
            com.insert(x);
            sb.erase(x);
        }
    }
    for (auto x : com) {
        sa.erase(x);
    }
    long long sz = sa.size() + sb.size() + com.size();
    if (sz < k) {
        cout << "NO" << endl;
        return;
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        TEST();
    }

    return 0;
}

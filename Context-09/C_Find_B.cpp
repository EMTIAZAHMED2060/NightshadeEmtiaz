#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

struct Monster {
    int health;
    int distance;
};

bool compareDistance(const Monster& a, const Monster& b) {
    return abs(a.distance) < abs(b.distance);
}

void solve() {
    int n, k;
    cin >> n >> k;

    vector<Monster> monsters(n);
    for (int i = 0; i < n; ++i) {
        cin >> monsters[i].health;
    }
    for (int i = 0; i < n; ++i) {
        cin >> monsters[i].distance;
    }

    sort(monsters.begin(), monsters.end(), compareDistance);

    for (int i = 0; i < n; ++i) {
        int shots = min(k, abs(monsters[i].distance) - 1);
        monsters[i].health -= shots;
        k -= shots;

        if (monsters[i].health <= 0) {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

#include <iostream>
#include <vector>
#include <queue>
#include <cmath>
using namespace std;

#define ll long long


void solve() {
    ll n, k;
    cin >> n >> k;

    vector<ll> h(n);
    vector<ll> c(n);

    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> q;

    for (int i = 0; i < n; i++) {
        cin >> h[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> c[i];
    }

    for (int i = 0; i < n; i++) {
        q.push({abs(c[i]), h[i]});
    }

    ll e = 0;
    ll t = 0;

    while (!q.empty()) {
        ll c = q.top().first;
        ll h = q.top().second;
        q.pop();
        h= h - e;

        if (h < 0) {
            e = k;
        } else if (c - t > 0 && h - k > 0) {
            q.push({c, h - k});
        } else if (c - t > 0 && h - k <= 0) {
            if (h <= 0) {
                e = e + k;
            } else {
                e = e + k - h;
            }
        } else if (c - t <= 0) {
            cout << "NO" << endl;
            return;
        }

        t++;
    }

    cout << "YES" << endl;
}

int main() {
    ll test;
    cin >> test;
    while (test--) {
        solve();
    }
    return 0;
}

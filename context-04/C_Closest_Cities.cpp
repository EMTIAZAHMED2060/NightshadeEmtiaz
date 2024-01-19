#include <iostream>
#include <map>
#include <cmath>
using namespace std;

int main() {
    long long t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        long long a[n];
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }

        long long left[n], right[n];
        map<int, int> m;
        m[0] = 1;
        m[n - 1] = -1;

        for (int i = 1; i < n - 1; i++) {
            long long left_dist = abs(a[i] - a[i - 1]);
            long long right_dist = abs(a[i] - a[i + 1]);

            if (left_dist < right_dist) {
                m[i] = -1;
            } else {
                m[i] = 1;
            }
        }

        left[0] = 0;
        for (int i = 1; i < n; i++) {
            if (m[i] == -1) {
                left[i] = 1 + left[i - 1];
            } else {
                left[i] = left[i - 1] + abs(a[i] - a[i - 1]);
            }
        }

        right[n - 1] = 0;
        for (int i = n - 2; i >= 0; i--) {
            if (m[i] == 1) {
                right[i] = 1 + right[i + 1];
            } else {
                right[i] = right[i + 1] + abs(a[i] - a[i + 1]);
            }
        }

        long long q;
        cin >> q;

        while (q--) {
            long long x, y;
            cin >> x >> y;

            if (x == y) {
                cout << 0 << endl;
            } else {
                if (y > x) {
                    cout << right[x - 1] - right[y - 1] << endl;
                } else {
                    cout << left[x - 1] - left[y - 1] << endl;
                }
            }
        }
    }

    return 0;
}

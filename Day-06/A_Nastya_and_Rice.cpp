#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, a, b, c, d;
        cin >> n >> a >> b >> c >> d;

        int min_grain_weight = n * (a - b);
        int max_grain_weight = n * (a + b);

        if (max_grain_weight < c - d || min_grain_weight > c + d) {
            cout << "No" << endl;
        } else {
            cout << "Yes" << endl;
        }
    }

    return 0;
}

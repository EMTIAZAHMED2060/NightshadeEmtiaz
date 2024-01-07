#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            if (s[i] == '+') {
                a[i] = 1;
            } else {
                a[i] = -1;
            }
        }

        long long current_sum = 0;
        long long total_penalty = 0;

        for (int i = 0; i < n; ++i) {
            current_sum += a[i];
            total_penalty += abs(current_sum);
        }

        cout << total_penalty << endl;
    }

    return 0;
}

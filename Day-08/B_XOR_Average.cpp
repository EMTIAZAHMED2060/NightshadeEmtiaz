#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        if (n == 1) {
            cout << "1\n";
        } else if (n % 2 == 0) {
            cout << "1 1";
            for (int i = 3; i <= n; i += 2) {
                cout << " 1";
            }
            cout << endl;
        } else {
            cout << "1 1";
            for (int i = 3; i <= n - 2; i += 2) {
                cout << " 1";
            }
            cout << " " << n - 1 << " " << (1 ^ 1 ^ (n - 1));
            cout << endl;
        }
    }

    return 0;
}

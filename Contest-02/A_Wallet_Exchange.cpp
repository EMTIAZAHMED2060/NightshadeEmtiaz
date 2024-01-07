#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long int a, b;
        cin >> a >> b;

        if ((a - 1 + b) % 2 == 0) {
            cout << "Alice" << endl;
        } else {
            cout << "Bob" << endl;
        }
    }

    return 0;
}

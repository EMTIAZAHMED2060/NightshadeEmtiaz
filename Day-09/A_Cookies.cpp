#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> cookies(n);
    int totalCookies = 0;

    for (int i = 0; i < n; ++i) {
        cin >> cookies[i];
        totalCookies += cookies[i];
    }

    int ways = 0;

    for (int i = 0; i < n; ++i) {
        if ((totalCookies - cookies[i]) % 2 == 0) {
            ++ways;
        }
    }

    cout << ways << endl;

    return 0;
}

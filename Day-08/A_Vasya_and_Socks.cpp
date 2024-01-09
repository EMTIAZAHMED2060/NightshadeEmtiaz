#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int days = 0; 

    // Simulate Vasya wearing socks and getting new pairs
    while (n > 0) {
        n--;
        days++; 

        if (days % m == 0) {
            n++;
        }
    }

    cout << days << endl;

    return 0;
}

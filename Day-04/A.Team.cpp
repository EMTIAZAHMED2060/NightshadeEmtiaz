#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int count = 0;

    for (int i = 0; i < n; ++i) {
        int petya, vasya, tonya;
        cin >> petya >> vasya >> tonya;

        int sureFriends = petya + vasya + tonya;

    
        if (sureFriends >= 2) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}

#include<iostream>
#include<vector>
using namespace std;

void test(int n) {
    vector<int> v(n, 0);

    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int curr = v[0];

    for(int i = 1; i < n; i++) {
        if(v[i] > curr) {
            curr = v[i];
        } else {
            int j = 2;
            int temp = v[i];
            while(temp <= curr) {
                temp = v[i] * j;
                j++;
            }
            curr = temp;
        }
    }

    cout << curr << endl;
}

int main() {
    int t; 
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        test(n);
    }
    return 0;
}

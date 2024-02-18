#include <bits/stdc++.h>
using namespace std;

#define int long long

int mod;

int st[1000001][20];

void buildsparse(int arr[], int N) {
    for (int i = 0; i < N; i++)
        st[i][0] = arr[i];

    for (int j = 1; j < 20; j++) 
        for (int i = 0; i + (1 << j) <= N; i++)
            st[i][j] = (st[i][j - 1] * st[i + (1 << (j - 1))][j - 1]) % mod; 
}

int query(int L, int R) {
    int sum = 1; 
    for (int j = 19; j >= 0; j--) { 

        if ((1 << j) <= R - L + 1) {
            sum *= st[L][j];
            sum %= mod;
            L += 1 << j;
        }
    }
    return sum;
}

signed main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n >> mod;
        int arr[n];

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        buildsparse(arr, n);
        string s;
        cin >> s;
        int l = 0, r = n - 1;
        for (int i = 0; i < n; i++) {
            cout << query(l, r) << " ";
            if (s[i] == 'L') {
                l++;
            } else {
                r--;
            }
        }
        cout << endl;
    }
    return 0;
}

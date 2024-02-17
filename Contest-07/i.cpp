#include <iostream>
#include <vector>
#include <string>
using namespace std;

const int MOD = 998244353;

int count_good_strings(int n, string p) {
    int ans = 1;
    
    for (int i = 0; i < n; ++i) {
        int left = 1, right = 1;
        for (int j = i - 1; j >= 0; --j) {
            if (p[j] == p[i])
                left++;
            else
                break;
        }
        for (int j = i + 1; j < n; ++j) {
            if (p[j] == p[i])
                right++;
            else
                break;
        }
        
        int modes = min(left, right);
        ans = (1LL * ans * modes) % MOD;
    }
    
    return ans;
}

int main() {
    int n;
    cin >> n;
    
    string p;
    cin >> p;
    
    int result = count_good_strings(n, p);
    cout << result << endl;

    return 0;
}

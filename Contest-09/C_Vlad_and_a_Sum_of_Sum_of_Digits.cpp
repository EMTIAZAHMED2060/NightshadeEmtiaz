#include <iostream>
#include <vector>
using namespace std;

int SD(int n) {
    int s = 0;
    while (n > 0) {
        s += n % 10;
        n /= 10;
    }
    return s;
}

int main() {
    int t;    cin >> t;
    
    vector<int> dp(1000001, 0); 
    
    for (int i = 1; i <= 1000000; i++) {
        dp[i] = dp[i - 1] + SD(i); 
    }
    
    while (t--) {
        int n;    cin >> n;
        
        long long s = dp[n]; 
        
        cout << s << endl;
    }
    return 0;
}

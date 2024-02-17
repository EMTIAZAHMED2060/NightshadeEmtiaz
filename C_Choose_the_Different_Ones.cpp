#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

bool canChoose(int n, int m, int k, const vector<int>& a, const vector<int>& b) {
    unordered_map<int, int> countA, countB;
    
    for (int num : a)
        countA[num]++;
    for (int num : b)
        countB[num]++;
    
    for (int i = 1; i <= k/2; ++i) {
        int total = countA[i] + countB[i];
        if (total < 2)
            return false;
    }
    
    return true;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        
        vector<int> a(n), b(m);
        for (int i = 0; i < n; ++i)
            cin >> a[i];
        for (int i = 0; i < m; ++i)
            cin >> b[i];
        
        if (canChoose(n, m, k, a, b))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    
    return 0;
}

#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string ans;
        vector<int> freq(26, 0); // Initialize freq vector with 26 elements, all set to 0

        for (int i = 0; i < n; i++) { 
            int num;
            cin >> num;
            for (char k = 'z'; k >= 'a'; k--) { // Start from 'z' down to 'a'
                if (freq[k - 'a'] == num - 1) {
                    freq[k - 'a']++;
                    ans += k;
                    break;
                }
            }
        }
    
        cout << ans << endl; // Moved this inside the while loop
    }
    return 0;
}

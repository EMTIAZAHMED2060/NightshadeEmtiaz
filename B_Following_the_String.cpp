#include <iostream>
#include <vector>
#include <string>

using namespace std;

string constructString(int n, const vector<int>& trace) {
    string s(n, 'a');
    
    for (int i = 0; i < n; ++i) {
        s[i] = 'a' + trace[i];
    }
    
    return s;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> trace(n);
        for (int i = 0; i < n; ++i) {
            cin >> trace[i];
        }
        
        string s = constructString(n, trace);
        cout << s << endl;
    }
    
    return 0;
}

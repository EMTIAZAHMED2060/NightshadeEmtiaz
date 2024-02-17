#include <iostream>
#include <vector>
#include <string>

using namespace std;

int minSegmentLength(int n, string s) {
    int maxSegmentLength = 0;
    int currentSegmentLength = 0;
    
    for (char cell : s) {
        if (cell == 'B') {
            currentSegmentLength++;
            maxSegmentLength = max(maxSegmentLength, currentSegmentLength);
        } else {
            currentSegmentLength = 0;
        }
    }
    
    return maxSegmentLength;
}

int main() {
    int t;
    cin >> t;
    
    vector<pair<int, string>> cases(t);
    
    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        cases[i] = make_pair(n, s);
    }
    
    for (auto& testCase : cases) {
        int n = testCase.first;
        string s = testCase.second;
        cout << minSegmentLength(n, s) << endl;
    }
    
    return 0;
}

#include<iostream>
using namespace std;

void test() {
    int n; 
    cin >> n;
    string str; 
    cin >> str;
    int count = -1;
    for(int i = 1; i < n; i++) {
        if(str[i - 1] == str[i] && str[i] == '*') {
            count = i;
            break;
        }
    }
    if(count == -1) {
        count = n;
    }
    int ans = 0;
    for(int i = 0; i < count; i++) {
        if(str[i] == '@') {
            ans++;
        }
    }
    cout << ans << endl;
}

int main() {
    int t; 
    cin >> t;
    while(t--) {
        test();
    }
    return 0;
}

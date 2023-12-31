/**************************************************/
/*           Author : Nightshade Emtiaz           */
/*        Github : github.com/NightshadeEmtiaz    */
/**************************************************/
#include <iostream>
#include <algorithm> 
#include <numeric> 
using namespace std;

void solve() {
    int a, b;   cin >> a >> b;
    if(lcm(a,b)==b)
    {
        cout<< lcm(a,b)*(b/a)<<endl;

    }
    else
    {
        cout<<lcm(a,b)<<endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) { 
        solve();
    }

    return 0;
}

#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n); 
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int up = -1; 
    int down = -1; 
    for(int i = 0; i < n; i++) 
    {
        if(a[i] == 1 && down == -1)
        {
            down = i; 
        }
        if(a[i] == 1) 
        {
            up = i; 
        }
    }

    int ct = 0;
    for(int i = down; i < up; i++) 
    {
        if(a[i] == 0) 
        {
            ct++;
        }
    }
    cout << ct << endl;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}

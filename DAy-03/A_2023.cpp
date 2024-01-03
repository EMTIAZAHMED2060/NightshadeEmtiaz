
#include <iostream>
#include <vector>

using namespace std;

void TC()
{
   int n, k, cur = 1;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        
        cur *= a[i];
        if (cur > 2023)
        {
            cout << "NO\n";
            return;
        }
    }

    if (2023 % cur || k < 1)  
    {
        cout << "NO\n";
        return;
    }

    cout << "YES\n";
    k--;
    cout << 2023 / cur;
    while (k--)
        cout << ' ' << 1;
    cout << endl;
}

int main()
{
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        TC();
    }
    return 0;
}

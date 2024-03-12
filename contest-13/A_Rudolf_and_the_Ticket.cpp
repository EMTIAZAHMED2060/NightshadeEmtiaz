/**************************************************/
/*           Author : Nightshade Emtiaz           */
/*        Github : github.com/NightshadeEmtiaz    */
/**************************************************/
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <cmath>
#include <bitset>
#include <list>
#include <deque>
#include <forward_list>
#include <unordered_map>
#include <unordered_set>
#include <array>
#include <tuple>
#include <functional>
#include <iterator>
#include <memory>
#include <numeric>
#include <utility>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;

        vector<int> a(n), b(m);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < m; i++)
            cin >> b[i];

        int ans = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++)
                ans += (a[i] + b[j] <= k);
        }

        cout << ans << "\n";
    }

    return 0;
        
    }

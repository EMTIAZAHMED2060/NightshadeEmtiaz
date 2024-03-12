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

void solve()
{
    long long n;
    cin >> n;
    long long ans = 1;
    while (ans * 2 <= n) {
        ans *= 2;
    }
    cout << ans;
}

int main()
{
    solve();
    return 0;
}

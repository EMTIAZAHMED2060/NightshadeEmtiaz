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
    int _TEST;
    cin >> _TEST;
    while (_TEST--)
    {
        int n;
        cin >> n;
        vector<int>a(n);
        for( auto &i : a ) cin >> i;
        sort(a.begin(), a.end());
        cout<<abs(a[0]-a[n-1]) +
              abs(a[n-1]-a[1]) +
              abs(a[1] -a [n-2]) +
              abs(a[n-2]-a[0])
              
            <<endl;

    }
    return 0;
}
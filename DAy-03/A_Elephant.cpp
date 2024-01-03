/**************************************************/
/*           Author : Nightshade Emtiaz            */
/*        Github : github.com/NightshadeEmtiaz    */
/**************************************************/
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int s;
    
    if (n % 5 == 0) {
        s = n / 5;
    } else {
        s = (n / 5) + 1;
    }
    cout<<s<<endl;

    return 0;
}

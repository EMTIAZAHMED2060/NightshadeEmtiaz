#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;

cin >> n;

vector<int> numbers(2* n);

for (int i = 0; i < 2* n; i++) {

cin >> numbers[i];

} sort(numbers.begin(), numbers.end());

int score = 0;

for (int i = 0; i < 2 * n; i += 2) {

score += numbers[i];

}

cout << score << endl;
}
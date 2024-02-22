#include <iostream>
#include <string>

using namespace std;

string process_string(string s) {
    string vowels = "AEIOUYaeiouy";
    string result = "";
    for (char &c : s) {
        if (vowels.find(c) == -1) { 
            result += ".";
            result += tolower(c);
        }
    }
    return result;
}

int main() {
    string input;
    cin >> input;

    cout << process_string(input) << endl;
    
    return 0;
}

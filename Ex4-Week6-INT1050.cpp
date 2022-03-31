#include <iostream>

using namespace std;

string reserve (string s) {
    if (s.size() == 1) {
        return s;
    } else if (s.size() > 1) {
        return reserve(s.substr(1, s.size() - 1)) + s[0];
    }
}

int main () {
    string s;
    cin >> s;

    cout << reserve(s);
    return 0;
}
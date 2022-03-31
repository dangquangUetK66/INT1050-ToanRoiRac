#include <iostream>
#include <string>

using namespace std;

int ones(string s) {
    if (s.size() == 0) {
        if (s == "1") {
            return 1;
        } else {
            return 0;
        }
    } else {
        char temp = s[0];
        if (temp == '1') {
            return 1 + ones(s.substr(1, s.size() - 1));
        } else {
            return 0 + ones(s.substr(1, s.size() - 1));
        }
    }
}

int main () {
    string s;
    cin >> s;

    cout << ones(s);

    return 0;
}
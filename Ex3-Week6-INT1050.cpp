#include <iostream>
#include <cmath>
#include <string>
#include <cstring>

using namespace std;

string m(string s) {
    string res = "";
    if (s.size() == 1) {
        res = s;
    } else {
        string temp1 = s.substr(0, 1);
        string temp2 = s.substr(1, s.size() - 1);

        if (temp1 < m(temp2)) {
            res = temp1;
        } else {
            res = m(temp2);
        }
    }

    return res;
}

int main () {
    string s;
    cin >> s;

    cout << m(s) << endl;
    return 0;
}
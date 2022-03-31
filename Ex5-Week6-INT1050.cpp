#include <iostream>

using namespace std;

// Function Prototypes: xau doi xung voi do dai = n, n nhap tu ban phim
void func (int n, string s) {
    if (n == 0) {
        cout << s << endl; 
    } else {
        func (n - 2, "0" + s + "0");
        func (n - 2, "1" + s + "1");
    }
}

int main () {
    int n;
    cin >> n;

    n = 2 * (int)(n / 2);
    string s = "";

    func (n, s);
    return 0;

}
#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.length();
    for (int i = 0; i < n; i++) {
        if (s[i] == '0') {
            cout << '1';
        } else {
            cout << '0';
        }
    }
    cout << endl;
    return 0;
}
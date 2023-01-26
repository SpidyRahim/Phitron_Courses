#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    bool found = false;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if ((a[i] - a[j]) % 200 == 0) {
                cout << i+1 << " " << j+1 << endl;
                found = true;
                break;
            }
        }
        if (found) break;
    }
    if (!found) cout << -1 << endl;
    return 0;
}

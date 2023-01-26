#include <iostream>
using namespace std;

bool canPay(int N, int X, int A[], int B[]) {
    int sum = 0;
    for (int i = 0; i < N; i++) {
        sum += A[i] * B[i];
    }
    if (sum < X) {
        return false;
    }
    else {
        return true;
    }
}

int main() {
    int N, X;
    cin >> N >> X;
    int A[N], B[N];
    for (int i = 0; i < N; i++) {
        cin >> A[i] >> B[i];
    }
    if (canPay(N, X, A, B)) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
    return 0;
}

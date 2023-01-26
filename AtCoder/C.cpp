#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    string S;
    cin >> S;

    int cost = 0;
    for (int i = 0; i < N / 2; i++) {
        if (S[i] != S[N - i - 1]) { // check if the characters are not equal
            if (S[i] == S[N - i - 2]) { // check if the leftmost character is equal to the rightmost character after shifting it to the right
                cost += 2; // increment the cost by 2 for shifting
            } else if (S[i + 1] == S[N - i - 1]) { // check if the leftmost character after shifting is equal to the rightmost character
                cost++; // increment the cost by 1 for shifting
                swap(S[i], S[i + 1]); // swap the leftmost and the next character
            } else {
                cost++; // increment the cost by 1 for replacing
            }
        }
    }

    cout << cost << endl;
    return 0;
}
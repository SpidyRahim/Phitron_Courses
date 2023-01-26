#include <iostream>
using namespace std;

void swapSequence(int A[], int N, int P, int Q, int R, int S)
{
    int temp[Q - P + 1];
    int k = 0;
    // Store P-th through Q-th terms of A in the temporary array
    for (int i = P - 1; i <= Q - 1; i++)
    {
        temp[k] = A[i];
        k++;
    }
    k = 0;
    // Store R-th through S-th terms of A in the P-th through Q-th positions of A
    for (int i = R - 1; i <= S - 1; i++)
    {
        A[P - 1 + k] = A[i];
        k++;
    }
    k = 0;
    // Store P-th through Q-th terms of A in the R-th through S-th positions of A
    for (int i = P - 1; i <= Q - 1; i++)
    {
        A[R - 1 + k] = temp[k];
        k++;
    }
}

int main()
{
    int N;
    cin >> N;
    int A[N];
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    int P, Q, R, S;
    cin >> P >> Q >> R >> S;
    swapSequence(A, N, P, Q, R, S);
    for (int i = 0; i < N; i++)
    {
        cout << A[i] << " ";
    }
    return 0;
}

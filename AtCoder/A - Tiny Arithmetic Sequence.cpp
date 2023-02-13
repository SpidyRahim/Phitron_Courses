#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> A(3);
    cin >> A[0] >> A[1] >> A[2];
    sort(A.begin(), A.end());
    string ans = "No";              // shurutei age ami No string initialize kore nilam
    if (A[2] - A[1] == A[1] - A[0]) // checking jodi mile to yes hobe jeta niche deya ache
    {
        ans = "Yes";
    }
    cout << ans << endl; // na mille No print hoye jabe karon ami agei No dhore niyechi
}
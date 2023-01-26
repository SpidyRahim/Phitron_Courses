/*#include <iostream>
using namespace std;

string replaceNa(string S)
{
    string result = "";
    for (int i = 0; i < S.length(); i++)
    {
        result += S[i];
        if (S[i] == 'n' && S[i + 1] == 'a')
        {
            result += 'y';
        }
    }
    return result;
}

int main()
{
    int n;
    cin>>n;
    string S;
    cin >> S;
    cout << replaceNa(S) << endl;
    return 0;
}*/
#include <iostream>
using namespace std;

string replaceNa(string S)
{
    string result = "";
    for (int i = 0; i < S.length(); i++)
    {
        result += S[i];
        if (i + 1 < S.length() && S[i] == 'n' && S[i + 1] == 'a')
        {
            result += 'y';
            i++;
        }
    }
    return result;
}

int main()
{
    int N;
    cin >> N;
    string S;
    cin >> S;
    if (S.length() != N)
    {
        cout << "Length of string is not equal to given input" << endl;
        return 0;
    }
    cout << replaceNa(S) << endl;
    return 0;
}
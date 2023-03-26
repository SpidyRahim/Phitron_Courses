#include <iostream>
using namespace std;

int power(int base, int exponent)
{
    if (exponent == 0) // base case
    {
        return 1;
    }
    else
    {
        return base * power(base, exponent - 1);
    }
}

int main()
{
    int n, m;
    cin >> n >> m;

    int result = power(n, m);
    cout << result << endl;

    return 0;
}

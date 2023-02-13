#include <iostream>
using namespace std;

int sum_of_digits(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int x = n / 2;
        int y = n / 2;
        if (n % 2 == 1)
        {
            if (sum_of_digits(x) <= sum_of_digits(y + 1))
            {
                y++;
            }
            else
            {
                x++;
            }
        }
        cout << x << " " << n - x << endl;
    }
    return 0;
}

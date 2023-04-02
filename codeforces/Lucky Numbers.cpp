/* #include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int luckiness(int n)
{
    // Convert the number to a string
    string s = to_string(n);

    // Find the largest and smallest digits
    char largest = *max_element(s.begin(), s.end());
    char smallest = *min_element(s.begin(), s.end());

    // Calculate the luckiness
    return largest - smallest;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int l, r;
        cin >> l >> r;

        int max_luckiness = 0;
        int ans = l;

        // Iterate over all starship numbers in the range [l, r]
        for (int i = l; i <= r; i++)
        {
            // Calculate the luckiness of the current number
            int curr_luckiness = luckiness(i);

            // If the luckiness is greater than the maximum seen so far,
            // update the answer and the maximum luckiness
            if (curr_luckiness > max_luckiness)
            {
                max_luckiness = curr_luckiness;
                ans = i;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
 */

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

bool is_valid(int n)
{
    // Check if the sum of digits is divisible by 3
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    if (sum % 3 != 0)
    {
        return false;
    }

    // Check if the absolute difference between any two adjacent digits is at most 1
    string s = to_string(n);
    for (int i = 1; i < s.length(); i++)
    {
        if (abs(s[i] - s[i - 1]) > 1)
        {
            return false;
        }
    }

    return true;
}

int luckiness(int n)
{
    // Convert the number to a string
    string s = to_string(n);

    // Find the largest and smallest digits
    char largest = *max_element(s.begin(), s.end());
    char smallest = *min_element(s.begin(), s.end());

    // Calculate the luckiness
    return largest - smallest;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int l, r;
        cin >> l >> r;

        int max_luckiness = -1;
        int ans = -1;

        // Iterate over all valid starship numbers in the range [l, r]
        for (int i = l; i <= r; i++)
        {
            if (is_valid(i))
            {
                // Calculate the luckiness of the current number
                int curr_luckiness = luckiness(i);

                // If the luckiness is greater than the maximum seen so far,
                // update the answer and the maximum luckiness
                if (curr_luckiness > max_luckiness)
                {
                    max_luckiness = curr_luckiness;
                    ans = i;
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}

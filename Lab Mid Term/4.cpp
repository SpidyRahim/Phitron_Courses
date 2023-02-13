#include <iostream>
#include <string>
using namespace std;
bool isPalindrome(string word, int start, int end)
{
    if (start >= end)
    { // base case
        return true;
    }
    if (word[start] != word[end])
    { // if the characters at the start and end are different
        return false;
    }
    return isPalindrome(word, start + 1, end - 1); // recursively check the next characters
}

int main()
{
    string word;

    cin >> word;
    if (isPalindrome(word, 0, word.length() - 1))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}

#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    int counter = 0;
    for (int i = 0; i < n; i++)
    {
        std::string s;
        std::cin >> s;
        if (s == "For")
        {
            counter++;
        }
        else
        {
            counter--;
        }
    }
    if (counter > 0)
    {
        std::cout << "Yes" << std::endl;
    }
    else
    {
        std::cout << "No" << std::endl;
    }
    return 0;
}
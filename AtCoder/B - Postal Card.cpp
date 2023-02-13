#include <iostream>
#include <string>
#include <unordered_set>

int main()
{
    int n, m;
    std::cin >> n >> m;

    std::unordered_set<std::string> T;
    for (int i = 0; i < m; i++)
    {
        std::string t;
        std::cin >> t;
        T.insert(t);
    }

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        std::string s;
        std::cin >> s;
        std::string last_three = s.substr(3, 3);
        if (T.count(last_three) > 0)
        {
            count++;
        }
    }

    std::cout << count << std::endl;
    return 0;
}

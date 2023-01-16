#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >>n;
    vector<int> vec(n);
    for (int i = 0; i < vec.size(); i++)
    {
        cin >> vec[i];
    }
    
    int a, b;
    cin >> a >> b;
    // Subtract one from the positions since vector indices start at 0
    a--;
    b--;

    // Erase the elements from the given range
    vec.erase(vec.begin() + a, vec.begin() + b + 1);

    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    return 0;
}

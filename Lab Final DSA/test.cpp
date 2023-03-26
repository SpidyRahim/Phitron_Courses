#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	map<string, int> prev_index;

	for (int i = 0; i < n; i++)
	{
    	string s;
    	cin >> s;
    	if (prev_index.count(s))
    	{
        	cout << prev_index[s] << " ";
    	}
    	else
    	{
        	cout << "-1 ";
    	}
    	prev_index[s] = i;

    	cout << endl;
	}
    
	return 0;
}

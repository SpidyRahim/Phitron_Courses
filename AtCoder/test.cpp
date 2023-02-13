#include <bits/stdc++.h>
using namespace std;

void deleteValue(list<int> &l, int value)
{
	auto it = l.begin();
	while (it != l.end())
	{
    	if (*it == value)
    	{
        	it = l.erase(it);
        	break;
    	}
    	else
    	{
        	++it;
    	}
	}
}

void print(list<int> &l)
{
	for (auto it = l.begin(); it != l.end(); ++it)
    	cout << *it << " ";

	cout << "\n";
}

int main()
{
	list<int> l = {7, 3, 8, 4, 5, 4};

	print(l);

	deleteValue(l, 4);

	print(l);

	return 0;
}

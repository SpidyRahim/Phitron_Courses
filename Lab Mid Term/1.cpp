#include <bits/stdc++.h>
using namespace std;

int main()
{
	int size;
	cin >> size;
	vector<int> myVec(size);

	for (int i = 0; i < size; i++)
	{
    	cin >> myVec[i];
	}

	// reverse the vector
	reverse(myVec.begin(), myVec.end());

	for (int i = 0; i < size; i++)
	{
    	cout << myVec[i] << " ";
	}

	return 0;
}

#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> adj_matrix_to_list(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    vector<vector<int>> list(n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matrix[i][j] != 0)
            {
                list[i].push_back(j);
            }
        }
    }

    return list;
}

int main()
{
    int n;
    cin >> n;

    // Create an empty adjacency matrix
    vector<vector<int>> matrix(n, vector<int>(n));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }

    // Converting matrix to list
    vector<vector<int>> list = adj_matrix_to_list(matrix);

    // Printing the resulting adjacency list

    for (int i = 0; i < list.size(); i++)
    {
        cout << i << ": ";
        for (int j = 0; j < list[i].size(); j++)
        {
            cout << list[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
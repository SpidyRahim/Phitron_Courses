#include <iostream>
using namespace std;

class node
{
public:
    int value;
    node *Left;
    node *Right;
};

class BST
{
public:
    node *root;
    BST()
    {
        root = NULL;
    }
    void Insert(int value)
    {
        node *newNode = new node();
        newNode->value = value;
        newNode->Left = NULL;
        newNode->Right = NULL;
        if (root == NULL)
        {
            root = newNode;
        }
        else
        {
            node *temp = root;
            while (true)
            {
                if (value < temp->value)
                {
                    if (temp->Left == NULL)
                    {
                        temp->Left = newNode;
                        break;
                    }
                    else
                    {
                        temp = temp->Left;
                    }
                }
                else
                {
                    if (temp->Right == NULL)
                    {
                        temp->Right = newNode;
                        break;
                    }
                    else
                    {
                        temp = temp->Right;
                    }
                }
            }
        }
    }
    bool Search(int value)
    {
        node *temp = root;
        while (temp != NULL)
        {
            if (temp->value == value)
            {
                return true;
            }
            else if (value < temp->value)
            {
                temp = temp->Left;
            }
            else
            {
                temp = temp->Right;
            }
        }
        return false;
    }
};

int main()
{
    BST bst;
    bst.Insert(10);
    bst.Insert(20);
    bst.Insert(25);
    bst.Insert(50);
    bst.Insert(8);
    bst.Insert(9);
    cout << bst.Search(10) << "\n"; // 1
    cout << bst.Search(9) << "\n";  // 1
    cout << bst.Search(20) << "\n"; // 1
    cout << bst.Search(60) << "\n"; // 0
    return 0;
}
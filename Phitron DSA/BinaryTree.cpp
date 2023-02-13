#include <iostream>
using namespace std;

class node
{
public:
    int id;
    node *left;   // memory location of left node
    node *right;  // memory location of right node
    node *parent; // memory location of parent node
};

class BinaryTree
{
public:
    node *root; // memory location of root node
    node *allnode[6];
    BinaryTree()
    {
        root = NULL;
    }
    node *CreateNewNode(int id)
    {
        node *newnode = new node;
        newnode->id = id;
        newnode->left = NULL;
        newnode->right = NULL;
        newnode->parent = NULL;
        return newnode;
    }

    void build_binary_tree()
    {
        for (int i = 0; i < 6; i++)
        {
            allnode[i] = CreateNewNode(i);
        }
        allnode[0]->left = allnode[1];
        allnode[0]->right = allnode[2];

        allnode[1]->left = allnode[5];
        allnode[1]->parent = allnode[0];

        allnode[2]->left = allnode[3];
        allnode[2]->right = allnode[4];
        allnode[2]->parent = allnode[0];

        allnode[5]->parent = allnode[1];

        allnode[3]->parent = allnode[2];
        allnode[4]->parent = allnode[2];

        root = allnode[0];
    }

    void print_tree()
    {
        for (int i = 0; i < 6; i++)
        {
            int p = -1;
            int l = -1;
            int r = -1;
            if (allnode[i]->parent != NULL)
                p = allnode[i]->parent->id;
            if (allnode[i]->left != NULL)
                l = allnode[i]->left->id;
            if (allnode[i]->right != NULL)
                r = allnode[i]->right->id;

            cout << "Node " << i << ": Parent = " << p << " , Left Child = " << l << " , Right Child = " << r << endl;
        }
    }
};

int main()
{
    BinaryTree bt;
    bt.build_binary_tree();
    bt.print_tree();

    return 0;
}
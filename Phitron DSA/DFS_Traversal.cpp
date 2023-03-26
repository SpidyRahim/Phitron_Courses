#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int id;
    int value;
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
    node *CreateNewNode(int id, int value)
    {
        node *newnode = new node;
        newnode->id = id;
        newnode->value = value;
        newnode->left = NULL;
        newnode->right = NULL;
        newnode->parent = NULL;
        return newnode;
    }

    void Inserion(int id, int value)
    {
        node *newnode = CreateNewNode(id, value);
        if (root == NULL)
        {
            root = newnode;
            return;
        }

        queue<node *> q;
        q.push(root);

        while (!q.empty())
        {
            node *a = q.front();
            q.pop();

            if (a->left != NULL) // jodi null na hoy tahole simply BFS er jonno ami queue te push kore dibo
            {
                q.push(a->left);
            }
            else // else e asche tar mane eikhane null ache ebong ami ekhane insert korte parbo
            {
                a->left = newnode;
                newnode->parent = a;
                return;
            }

            if (a->right != NULL) // jodi null na hoy tahole simply BFS er jonno ami queue te push kore dibo
            {
                q.push(a->right);
            }
            else // else e asche tar mane eikhane null ache ebong ami ekhane insert korte parbo
            {
                a->right = newnode;
                newnode->parent = a;
                return;
            }
        }
    }

    /* void build_binary_tree()
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
    } */

    void BFS()
    {
        if (root == NULL)
        {
            return;
        }

        queue<node *> q;
        q.push(root);

        while (!q.empty())
        {
            node *a = q.front();
            q.pop();
            int p = -1, l = -1, r = -1;
            if (a->left != NULL)
            {
                l = a->left->id;
                q.push(a->left);
            }

            if (a->right != NULL)
            {
                r = a->right->id;
                q.push(a->right);
            }

            if (a->parent != NULL)
            {
                p = a->parent->id;
            }
            cout << "Node id " << a->id << " , Left Child = " << l;
            cout << " , Right Child = " << r << " Parent id " << p << endl;
        }
    }

    void DFS(node *a) // node pointer nicchi karon ei node sob sub tree amk visit kore output dibe
    {
        if (a == NULL)
        {
            return;
        }
        cout << a->id << " ";
        DFS(a->left);
        DFS(a->right);
    }
    void Inorder(node *a) // node pointer nicchi karon ei node sob sub tree amk visit kore output dibe
    {
        if (a == NULL)
        {
            return;
        }
        Inorder(a->left);
        cout << a->id << " ";
        Inorder(a->right);
    }
    // cout << endl;
    void Preorder(node *a) // node pointer nicchi karon ei node sob sub tree amk visit kore output dibe
    {
        if (a == NULL)
        {
            return;
        }
        cout << a->id << " ";
        Preorder(a->left);
        Preorder(a->right);
    }
    // cout << endl;
    void Postorder(node *a) // node pointer nicchi karon ei node sob sub tree amk visit kore output dibe
    {
        if (a == NULL)
        {
            return;
        }
        Postorder(a->left);
        Postorder(a->right);
        cout << a->id << " ";
    }
    // cout << endl;

    void Search(node *a, int value)
    {
        if (a == NULL)
        {
            return;
        }
        if (a->value == value)
        {
            cout << a->id << " ";
        }
        Search(a->left, value);
        Search(a->right, value);
    }

    /* void print_tree()
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
    } */
};

int main()
{
    BinaryTree bt;
    // bt.build_binary_tree();
    //  bt.DFS(bt.root);
    //  bt.Inorder(bt.root);
    //  bt.Preorder(bt.root);
    //  bt.Postorder(bt.root);
    bt.Inserion(0, 20);
    bt.Inserion(1, 10);
    bt.Inserion(2, 22);
    bt.Inserion(3, 5);
    bt.Inserion(4, 12);
    bt.Inserion(5, 21);
    bt.Inserion(6, 25);
    bt.Inserion(7, 3);
    bt.Inserion(8, 15);
    bt.BFS();
    bt.Inorder(bt.root);
    cout<<endl;
    bt.Preorder(bt.root);
    cout<<endl;
    bt.Postorder(bt.root);

    /* cout << endl;
    bt.Search(bt.root, 5);
    
    cout << endl;
    bt.Search(bt.root, 10); */

    return 0;
}
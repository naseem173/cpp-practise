#include <iostream>
#include <queue>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};

node *build(string s)
{
    if (s == "true")
    {
        int d;
        cin >> d;
        node *root = new node(d);
        string l;
        cin >> l;
        if (l == "true")
        {
            root->left = build(l);
        }
        string r;
        cin >> r;
        if (r == "true")
        {
            root->right = build(r);
        }
        return root;
    }
    return NULL;
}

int identicalTrees(node *a, node *b)
{
    if (a == nullptr && b == nullptr)
        return 1;

    if (a != NULL && b != NULL)
    {
        return (
            identicalTrees(a->left, b->left) &&
            identicalTrees(a->right, b->right));
    }

    return 0;
}

int main()
{
    node *root = build("true");
    node *root1 = build("true");

    identicalTrees(root, root1) == 1 ? cout << "true" : cout << "false";

    return 0;
}

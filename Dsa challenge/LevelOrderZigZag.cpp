#include <iostream>
#include <stack>
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

void printZigZagOrder(node *root)
{
    if (!root){
        return;
    }

    stack<node *> currentLevel;
    stack<node *> nextLevel;

    currentLevel.push(root);

    bool leftToRight = true;

    while(!currentLevel.empty()){
        node *currNode = currentLevel.top();
        currentLevel.pop();

        if(currNode){
            cout << currNode->data << " ";
            if (leftToRight)
            {
                if (currNode->left)
                    nextLevel.push(currNode->left);
                if (currNode->right)
                    nextLevel.push(currNode->right);
            }
            else
            {
                if (currNode->right)
                    nextLevel.push(currNode->right);
                if (currNode->left)
                    nextLevel.push(currNode->left);
            }
        }
        if (currentLevel.empty())
        {
            swap(currentLevel, nextLevel);
            leftToRight = !leftToRight;
        }
        }
    }




int main()
{
    node *root = build("true");

    printZigZagOrder(root);
    return 0;
}

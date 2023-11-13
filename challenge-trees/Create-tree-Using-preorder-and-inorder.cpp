#include<iostream>
#include<vector>
using namespace std;

class TreeNode {
public:
    int data;
    TreeNode *left, *right;
    TreeNode(int d) : data(d), left(nullptr), right(nullptr) {}
};

TreeNode* buildTreeFromPreIn(vector<int>& preorder, vector<int>& inorder, int preStart, int preEnd, int inStart, int inEnd) {
    if (preStart > preEnd || inStart > inEnd) {
        return nullptr;
    }

    int rootData = preorder[preStart];
    TreeNode* root = new TreeNode(rootData);

    int rootIndexInorder;
    for (rootIndexInorder = inStart; rootIndexInorder <= inEnd; ++rootIndexInorder) {
        if (inorder[rootIndexInorder] == rootData) {
            break;
        }
    }

    int leftSubtreeSize = rootIndexInorder - inStart;

    root->left = buildTreeFromPreIn(preorder, inorder, preStart + 1, preStart + leftSubtreeSize, inStart, rootIndexInorder - 1);
    root->right = buildTreeFromPreIn(preorder, inorder, preStart + leftSubtreeSize + 1, preEnd, rootIndexInorder + 1, inEnd);

    return root;
}

void modifiedPreorder(TreeNode* root) {
    if (root) {
        if (root->left) {
            cout << root->left->data << " => ";
        } else {
            cout << "END => ";
        }

        cout << root->data << " <= ";

        if (root->right) {
            cout << root->right->data;
        } else {
            cout << "END";
        }

        cout << endl;

        modifiedPreorder(root->left);
        modifiedPreorder(root->right);
    }
}

int main() {
    int n, m;
    cin >> n;

    vector<int> preorder(n);
    for (int i = 0; i < n; ++i) {
        cin >> preorder[i];
    }

    cin >> m;

    vector<int> inorder(m);
    for (int i = 0; i < m; ++i) {
        cin >> inorder[i];
    }

    TreeNode* root = buildTreeFromPreIn(preorder, inorder, 0, n - 1, 0, m - 1);
    modifiedPreorder(root);

    return 0;
}

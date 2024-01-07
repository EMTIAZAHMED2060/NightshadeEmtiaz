#include <iostream>
#include <vector>

using namespace std;

// TreeNode structure to represent a node in the binary tree
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

// Function to calculate the total number of nodes in the tree
int noOfNodes(TreeNode* root) {
    if (root == nullptr) {
        return 0;
    }
    return 1 + noOfNodes(root->left) + noOfNodes(root->right);
}

// Function to check if a binary tree is complete
bool completeTree(TreeNode* root, int i = 0) {
    int totalNodes = noOfNodes(root);

    if (root == nullptr) {
        return true;
    }

    if (i >= totalNodes) {
        return false;
    }

    return completeTree(root->left, 2 * i + 1) && completeTree(root->right, 2 * i + 2);
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        // Reading distances from the root to the leaves
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        // Check if the binary tree is complete based on the given distances
        if (completeTree(nullptr, 0)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}

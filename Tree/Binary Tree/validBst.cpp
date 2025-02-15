#include <iostream>
#include <vector>
using namespace std;

/**
 * Definition for a binary tree node.
 */
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
    
    void inorderTraversal(TreeNode* root, vector<int>& inorder) {
        if (root == nullptr) return;

        inorderTraversal(root->left, inorder);  // Traverse left subtree
        inorder.push_back(root->val);          // Store current node value
        inorderTraversal(root->right, inorder); // Traverse right subtree
    }
    
public:
    bool isValidBST(TreeNode* root) {
        vector<int> inorder;
        inorderTraversal(root, inorder);  // Perform inorder traversal

        // Check if the inorder array is strictly increasing
        for (int i = 1; i < inorder.size(); i++) {
            if (inorder[i] <= inorder[i - 1]) return false;
        }
        return true;
    }
};

// Helper function to create a new node
TreeNode* newNode(int val) {
    return new TreeNode(val);
}

// Driver code to test the function
int main() {
    Solution sol;

    // Constructing a sample valid BST
    TreeNode* root = newNode(2);
    root->left = newNode(1);
    root->right = newNode(3);

    // Checking if it's a valid BST
    if (sol.isValidBST(root)) {
        cout << "The tree is a valid BST" << endl;
    } else {
        cout << "The tree is NOT a valid BST" << endl;
    }

    return 0;
}

#include<bits/stdc++.h>
using namespace std;

class TreeNode{
    public:
    int val;
    TreeNode *left;
    TreeNode* right;

    TreeNode() : val(0), left(nullptr), right(nullptr){}
    TreeNode(int x): val(x), left(nullptr), right(nullptr){}
    TreeNode(int x, TreeNode* left, TreeNode* right): val(x), left(left), right(right){}
};

class Solution{
    public:
    vector<vector<int>> levelOrder(TreeNode* root){
        vector<vector<int>> ans;
        queue<TreeNode*> q;
        q.push(root);
        if(root == NULL){
            return ans;
        }

        while(1){
            int size = q.size();
            if(size == 0){
                return ans;
            }
            vector<int>data;
            while(size > 0){
                TreeNode* temp = q.front();
                q.pop();
                data.push_back(temp->val);
                if(temp->left != NULL){
                    q.push(temp->left);
                }
                if(temp->right != NULL){
                    q.push(temp->right);
                }
                size--;
            }
            ans.push_back(data);
        }
        return ans;
    }
};

int main(){
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    Solution sol;
    vector<vector<int>> result = sol.levelOrder(root);

    for(const vector<int>& level : result){
        for(int val : level){
            cout<<val<<" ";
        }
        cout<<endl;
    }

    delete root->left->left;
    delete root->left->right;
    delete root->left;
    delete root->right;
    delete root;

    return 0;
}
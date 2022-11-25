/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> x;
        stack<struct TreeNode*> y;
        if(root)
            y.push(root);
        while(!y.empty()){
            root=y.top();
            y.pop();
            x.push_back(root->val);
            if(root->right)y.push(root->right);
            if(root->left)y.push(root->left);
        }
        return x;
    }
};
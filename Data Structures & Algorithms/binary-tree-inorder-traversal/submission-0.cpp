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
    void inorder(TreeNode* temp, vector<int>& res){
        if(temp->left) inorder(temp->left, res);
        res.push_back(temp->val);
        if(temp->right) inorder(temp->right, res);
        return;
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        if(root) inorder(root, res);
        return res;
    }
};
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
    int dfs(TreeNode* node, int maxsofar){
        if(!node) return 0;
        if(node->val<maxsofar) return dfs(node->left, maxsofar)+dfs(node->right, maxsofar);
        else return 1+dfs(node->left,node->val)+dfs(node->right,node->val);
    }
    int goodNodes(TreeNode* root) {
        if(!root) return 0;
        return 1+dfs(root->left, root->val)+dfs(root->right,root->val);
    }
};

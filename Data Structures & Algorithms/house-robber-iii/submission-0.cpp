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
    pair<int, int> dfs(TreeNode* node){
        if(!node){
            return pair<int,int> (0,0);
        }
        pair<int,int> left = dfs(node->left);
        pair<int,int> right = dfs(node->right);
        return pair<int,int> ((node->val + left.second + right.second), (max(left.first, left.second) + max(right.first, right.second)));
    }
    int rob(TreeNode* root) {
        if(!root) return 0;
        pair<int,int> res= dfs(root);
        return max(res.first, res.second);
    }
};
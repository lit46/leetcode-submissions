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
    int diameter = 0;
    int depth(TreeNode* temp){
        if(temp==NULL) return 0;
        int ld = depth(temp->left);
        int rd = depth(temp->right);
        diameter = max(diameter, ld+rd);
        return 1+max(ld, rd);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int d = depth(root);
        return diameter;
    }
};

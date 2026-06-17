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
    void invert(TreeNode* temp){
        if(temp==NULL) return;
        invert(temp->left);
        invert(temp->right);
        TreeNode* tmp = temp->right;
        temp->right=temp->left;
        temp->left=tmp;
    }
    TreeNode* invertTree(TreeNode* root) {
        invert(root);
        return root;
    }
};

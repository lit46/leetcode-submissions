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
    int height(TreeNode* temp){
        if(!temp) return 0;
        int lh = height(temp->left);
        int rh = height(temp->right);
        if(lh==-1||rh==-1) return -1;
        if(abs(lh-rh)<=1) return 1+(max(lh,rh));
        else return -1;
    }
    bool isBalanced(TreeNode* root) {
        return height(root)!=-1;
    }
};

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
    bool node(TreeNode* temp){
        if(!temp) return true;
        if(abs(depth(temp->left)-depth(temp->right))<=1){
            if(!node(temp->left)) return false;
            if(!node(temp->right)) return false;
        }else{
            return false;
        }
        return true;
    }
    int depth(TreeNode* temp){
        if(!temp) return 0;
        return 1+max(depth(temp->left), depth(temp->right));
    }
    bool isBalanced(TreeNode* root) {
        return node(root);
    }
};

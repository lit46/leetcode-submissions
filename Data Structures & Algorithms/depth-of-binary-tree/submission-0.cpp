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
    int depth(TreeNode* temp, int dpt){
        if(temp==NULL) return 0;
        dpt++;
        int ld =0, rd=0;
        ld = depth(temp->left, ld);
        rd = depth(temp->right, rd);
        if(ld>=rd){
            dpt+=ld;
        }else{
            dpt+=rd;
        }
        return dpt;
    }
    int maxDepth(TreeNode* root) {
        int dpt = 0;
        dpt=depth(root, dpt);
        return dpt;
    }
};

// Last updated: 7/15/2025, 4:24:41 PM
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
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==nullptr) return false;

        if(root->left==nullptr&&root->right==nullptr&&root->val==targetSum){
            return true;
        }
        int diff=targetSum-root->val;

        bool left=hasPathSum(root->left,diff);
        bool right=hasPathSum(root->right,diff);

        return left||right;
    }
};
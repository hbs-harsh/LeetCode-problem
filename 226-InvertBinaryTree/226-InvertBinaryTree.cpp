// Last updated: 7/15/2025, 4:40:26 PM
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
    TreeNode* invertTree(TreeNode* root) {
        if(root == nullptr) return nullptr;


     TreeNode* leftInverted = invertTree(root->left);
      TreeNode* rightInverted =invertTree(root->right);
      root->left=rightInverted;
      root->right=leftInverted;

      return root;
    }
};
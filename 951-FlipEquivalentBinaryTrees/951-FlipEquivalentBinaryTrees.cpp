// Last updated: 7/16/2025, 2:31:40 PM
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
    bool flipEquiv(TreeNode* root1, TreeNode* root2) {
     if(root1==nullptr&&root2==nullptr) return true;
     if(!root1||!root2) return false;

     if(root1->val!=root2->val) return false;

     bool rootNotFliped=(flipEquiv(root1->left,root2->left)&&flipEquiv(root1->right,root2->right));
     bool rootFliped=(flipEquiv(root1->left,root2->right)&&flipEquiv(root1->right,root2->left));

     return rootNotFliped||rootFliped;   
    }
};
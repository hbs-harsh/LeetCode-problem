// Last updated: 7/17/2025, 4:13:41 PM
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
    TreeNode* searchBST(TreeNode* root, int val) {
     while(root !=nullptr){
        if(root->val == val){
            return root;
        }
       else if(val<root->val){
         root=root->left;
        }
        else
        root=root->right;
     }
     return nullptr;
        
    }
};
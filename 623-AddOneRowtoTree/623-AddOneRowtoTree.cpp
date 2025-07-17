// Last updated: 7/17/2025, 2:45:10 PM
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
TreeNode* addRow(TreeNode* root,int curdepth,int val,int depth){
     if(root==nullptr) return nullptr;
     if(depth==1) {
        TreeNode* node=new TreeNode(val);
            node->left=root;
            return node;
        }
        else if(curdepth==depth-1){
            TreeNode* a=new TreeNode(val);
            TreeNode* b=new TreeNode(val);

            TreeNode* oldLeft=root->left;
            TreeNode* oldRight=root->right;

            root->left=a;
            root->right=b;

            a->left=oldLeft;
            b->right=oldRight;
            return root;
        }
      else{
        root->left=addRow(root->left,curdepth+1,val,depth);
        root->right=addRow(root->right,curdepth+1,val,depth);
      return root;
      }

}
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        int curdepth=1;
        return addRow(root,curdepth,val,depth);
        
    }
};
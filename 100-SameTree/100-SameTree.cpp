// Last updated: 7/15/2025, 3:38:32 PM
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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==nullptr&&q==nullptr) return true;
      
      if(p!=nullptr&&q==nullptr) return false;
      if(p==nullptr&&q!=nullptr) return false;

      if(p->val != q->val) return false;

      bool isLeftSame=isSameTree(p->left,q->left);
      bool isRightSame=isSameTree(p->right,q->right);

      return isLeftSame&&isRightSame;
      
        
    }
};
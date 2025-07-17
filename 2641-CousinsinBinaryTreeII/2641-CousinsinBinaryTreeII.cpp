// Last updated: 7/17/2025, 3:49:25 PM
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
    TreeNode* replaceValueInTree(TreeNode* root) {
        if(!root) return nullptr;
        vector<int>levelSum;
        queue<TreeNode*>q;
        q.push(root);

        while(!q.empty()){
            int size=q.size();
           int curSum=0;
            for(int i=0;i<size;i++){
                TreeNode* node=q.front();
                q.pop();
                // list.push_back(node->val);
                curSum += node->val;

                if(node->left!=nullptr){
                    q.push(node->left);
                }
                if(node->right!=nullptr){
                    q.push(node->right);
                }

            }
            levelSum.push_back(curSum);
        }

        //for updating the value of a node with its cousin sum(totalLevelSum-siblingSum)

           // Pass 2: Modify tree node values with cousin sum
        q.push(root);
        root->val = 0;
        int lvl = 1;

        while (!q.empty()) {
            int size = q.size();

            for (int i = 0; i < size; i++) {
                TreeNode* node = q.front(); q.pop();

                int childSum = 0;
                if (node->left) childSum += node->left->val;
                if (node->right) childSum += node->right->val;

                if (node->left) {
                    q.push(node->left);
                    node->left->val = levelSum[lvl] - childSum;
                }

                if (node->right) {
                    q.push(node->right);
                    node->right->val = levelSum[lvl] - childSum;
                }
            }

            lvl++;
        }
        return root;

    }
};
// Last updated: 7/17/2025, 4:29:22 PM
class Solution {
public:
    bool isValidBST(TreeNode* root) {
        return isValid(root, LONG_MIN, LONG_MAX);
    }

    bool isValid(TreeNode* root, long long mini, long long maxi) {
        if (!root) return true;
        
        if (root->val <= mini || root->val >= maxi) {
            return false;
        }

        bool isLeft = isValid(root->left, mini, root->val);
        bool isRight = isValid(root->right, root->val, maxi);

        return isLeft && isRight;
    }
};

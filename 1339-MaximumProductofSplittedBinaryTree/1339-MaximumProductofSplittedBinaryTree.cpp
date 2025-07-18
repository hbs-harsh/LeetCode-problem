// Last updated: 7/18/2025, 2:48:34 PM
class Solution {
public:
    int mod = 1e9 + 7;
    long long maxProd = 0;

    int getTotalSum(TreeNode* root) {
        if (!root) return 0;
        return root->val + getTotalSum(root->left) + getTotalSum(root->right);
    }

    long long subTreeSum(TreeNode* root, long long totalSum) {
        if (!root) return 0;

        long long left = subTreeSum(root->left, totalSum);
        long long right = subTreeSum(root->right, totalSum);
        long long currentSum = left + right + root->val;

        long long product = currentSum * (totalSum - currentSum);
        maxProd = max(maxProd, product);

        return currentSum;
    }

    int maxProduct(TreeNode* root) {
        long long totalSum = getTotalSum(root);
        subTreeSum(root, totalSum);
        return maxProd % mod;
    }
};

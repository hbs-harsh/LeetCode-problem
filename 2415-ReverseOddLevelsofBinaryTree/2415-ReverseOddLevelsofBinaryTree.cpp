// Last updated: 7/16/2025, 4:50:37 PM
class Solution {
public:
    TreeNode* reverseOddLevels(TreeNode* root) {
        if (!root) return nullptr;

        queue<TreeNode*> q;
        q.push(root);
        int level = 0;

        while (!q.empty()) {
            int size = q.size();
            vector<TreeNode*> list;

            for (int i = 0; i < size; i++) {
                TreeNode* node = q.front();
                q.pop();

                list.push_back(node);

                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);
            }

            if (level % 2 == 1) {
                int l = 0, r = list.size() - 1;
                while (l < r) {
                    swap(list[l]->val, list[r]->val);
                    l++;
                    r--;
                }
            }

            level++;
        }

        return root;
    }
};

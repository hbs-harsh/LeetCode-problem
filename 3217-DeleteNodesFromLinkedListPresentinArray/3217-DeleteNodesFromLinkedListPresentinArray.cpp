// Last updated: 11/2/2025, 2:12:49 AM
class Solution {
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int> valuesToRemove(nums.begin(), nums.end());

        // Remove all leading nodes that should be deleted
        while (head && valuesToRemove.count(head->val)) {
            head = head->next;
        }

        // If all nodes are removed
        if (!head) return nullptr;

        ListNode* current = head;

        while (current->next) {
            if (valuesToRemove.count(current->next->val)) {
                current->next = current->next->next;
            } else {
                current = current->next;
            }
        }

        return head;
    }
};

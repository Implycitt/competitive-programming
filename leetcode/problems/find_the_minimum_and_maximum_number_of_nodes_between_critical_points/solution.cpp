/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        int Min = INT_MAX;
        int pointer {1};
        vector<int> out = {0, 0};
        ListNode* prev = head;
        ListNode* curr = head->next;
        ListNode* next = head->next->next;

        auto critical = [&]() {
            auto x = prev->val, y = curr->val, z = next->val;
            return (x < y && y > z) || (x > y && y < z);
        };

        while (next) {
            if (critical()) {
                if (out[0]) Min = min(Min, pointer - out[out[1] > 0]);
                out[out[0] > 0] = pointer;
            }

            prev = curr; curr = next;
            next = next->next; ++pointer;
        }
        if (out[1]) return {Min, out[1] - out[0]};
        return {-1, -1};
    }
};
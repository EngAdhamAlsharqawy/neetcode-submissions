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
    ListNode* middleNode(ListNode* head) {
        int size{};
        for (ListNode* cur{ head }; cur; cur = cur->next)
            ++size;
        ListNode* middle{ head };
        for (int i{}; i < size / 2; ++i)
            middle = middle->next;
        return middle;
    }
};
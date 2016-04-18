/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *pa = head;
        ListNode *pb = head;
        while (pa != NULL) {
            while (pb != NULL && pb->val == pa->val)
                pb = pb->next;
            pa->next = pb;
            pa = pb;
        }
        
        return head;
    }
};

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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *head = new ListNode(0);   // dummy head
        ListNode *next = head;
        
        while (l1 != NULL && l2 != NULL) {
            if (l1->val < l2->val) {
                next->next = l1;
                l1 = l1->next;
            } else {
                next->next = l2;
                l2 = l2->next;
            }
            next = next->next;
        }
        
        while (l1 != NULL) {
            next->next = l1;
            l1 = l1->next;
            next = next->next;
        }
        
        while (l2 != NULL) {
            next->next = l2;
            l2 = l2->next;
            next = next->next;
        }
        
        return head->next;
    }
};

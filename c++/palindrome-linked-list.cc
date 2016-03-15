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
    bool isPalindrome(ListNode* head) {
        if (head == NULL) {
            return true; //trivial
        }
        
        // calculates length of list
        int len = 0;
        ListNode* pEnd = head;
        while (pEnd != NULL) {
            len++;
            pEnd = pEnd->next;
        }
        
        pEnd = head;
        for (int i = 0; i < (len / 2); i++) {
            pEnd = pEnd->next;
        }
        
        ListNode* secList = reverse_list(pEnd);
        while (secList != NULL) {
            if (head->val != secList->val) {
                return false;
            }
            head = head->next;
            secList = secList->next;
        }
        
        return true;
    }
    
    ListNode* reverse_list(ListNode* head) {
        ListNode* old = NULL;
        while (head->next != NULL) {
            ListNode* next = head->next;
            head->next = old;
            old = head;
            head = next;
        }
        head->next = old;
        return head;
    }
};

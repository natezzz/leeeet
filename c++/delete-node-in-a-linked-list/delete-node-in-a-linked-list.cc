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
    void deleteNode(ListNode* node) {
        // copy over value from the following node. repeat until the second last node
        while (node->next != NULL && node->next->next!=NULL) {
            node->val = node->next->val;
            node = node->next;
        }
        
        node->val = node->next->val;
        node->next = NULL;
    }
};

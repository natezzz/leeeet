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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if (headA == NULL || headB == NULL) {
            return NULL;
        }
        
        ListNode *nodeA = headA;
        ListNode *nodeB = headB;
        int lenA = 1;
        int lenB = 1;
        
        while (nodeA->next != NULL) {
            nodeA = nodeA->next;
            lenA++;
        }
        
        while (nodeB->next != NULL) {
            nodeB = nodeB->next;
            lenB++;
        }
        
        if (nodeA != nodeB) {
            return NULL;
        }
        
        nodeA = headA;
        nodeB = headB;
        
        if (lenA > lenB) {
            for (int i = 0; i < (lenA-lenB); i++)
                nodeA = nodeA->next;
        } else {
            for (int i = 0; i < (lenB-lenA); i++)
                nodeB = nodeB->next;
        }
        
        while (nodeA != nodeB) {
            nodeA = nodeA->next;
            nodeB = nodeB->next;
        }
        
        return nodeA;
    }
};

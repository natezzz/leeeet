class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if (headA == NULL || headB == NULL) {
            return NULL;
        }
        
        ListNode *nodeA = headA;
        ListNode *nodeB = headB;
        
        while (nodeA != nodeB) {
            nodeA = (nodeA == NULL) ? headB : nodeA->next;
            nodeB = (nodeB == NULL) ? headA : nodeB->next;
        }
        
        return nodeA;
    }
};

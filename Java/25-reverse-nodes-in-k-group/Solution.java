/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) { val = x; }
 * }
 */
public class Solution {
    public ListNode reverseKGroup(ListNode head, int k) {
        ListNode newHead = head;
        if (longEnough(head, k)) {
           ListNode n = head;
           ListNode next = head.next;
           for (int i = 0; i < k-1; i++) {
               ListNode tmp = next.next;
               next.next = n;
               n = next;
               next = tmp;
           }
           newHead = n;
           head.next = reverseKGroup(next, k);
        }
        return newHead;
    }
    
    public boolean longEnough(ListNode n, int k) {
        int count = 0;
        while (n != null) {
            n = n.next;
            count++;
            if (count == k)
                return true;
        }
        return false;
    }
}


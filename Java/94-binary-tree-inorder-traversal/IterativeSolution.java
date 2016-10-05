/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
 */
public class Solution {
    public List<Integer> inorderTraversal(TreeNode root) {
        List<Integer> res = new ArrayList<>();
        Deque<TreeNode> deq = new ArrayDeque<>();
        
        TreeNode node = root;
        
        while (node != null || deq.size() != 0) {
            if (node != null) {
                deq.push(node);
                node = node.left;
            } else {
                TreeNode n = deq.pop();
                res.add(n.val);
                node = n.right;
            }
        }
        return res;
    }
}


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
    public List<Integer> postorderTraversal(TreeNode root) {
        List<Integer> res = new ArrayList<>();
        Deque<TreeNode> stack = new ArrayDeque<>();
        
        TreeNode node = root;
        TreeNode lastVisited = root;
        
        while (node != null || stack.size() != 0) {
            if (node != null) {
                stack.push(node);
                node = node.left;
            } else {
                TreeNode peek = stack.peek();
                if (peek.right == null || peek.right == lastVisited) {
                    stack.pop();
                    res.add(peek.val);
                    lastVisited = peek;
                } else {
                    node = peek.right;
                }
            }
        }
        return res;
    }
}


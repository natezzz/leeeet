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
        traverse(res, root);
        return res;
    }
    
    public void traverse(List<Integer> res, TreeNode node) {
        if (node == null)
            return;
        
        if (node.left != null)
            traverse(res, node.left);
        res.add(node.val);
        if (node.right != null)
            traverse(res, node.right);
    }
}


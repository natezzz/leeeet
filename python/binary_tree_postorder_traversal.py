# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

# trivial recursive solution
class Solution(object):

    def postorderTraversal(self, root):
        """
        :type root: TreeNode
        :rtype: List[int]
        """
        result = []
        self.postorderTraversalRecursive(root, result)
        return result
    
    def postorderTraversalRecursive(self, root, result):
        if not root:
            return
        if root.left:
            self.postorderTraversalRecursive(root.left, result)
        if root.right:
            self.postorderTraversalRecursive(root.right, result)
        result.append(root.val)

# iterative solution
# maintains a call stack manually
class Solution2(object):
    def postorderTraversal(self, root):
        # special case: tree empty
        if not root:
            return []
        result = []
        stack = []          # call stack
        stack.append(root)  # start from root

        # keep going when there exists unprocessed nodes
        while len(stack) != 0:
            current_node = stack.pop()
            result.append(current_node.val)
            if current_node.left:
                stack.append(current_node.left)
            if current_node.right:
                stack.append(current_node.right)
        return result[::-1]
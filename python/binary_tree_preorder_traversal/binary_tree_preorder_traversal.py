# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def preorderTraversal(self, root):
        """
        :type root: TreeNode
        :rtype: List[int]
        """
        if not root:
            return []
        stack = [root]
        result = [root.val]
        lastPop = root
        
        while len(stack) != 0:
            top = stack[-1]
            if top.left and top.left is not lastPop and top.right is not lastPop:
                stack.append(top.left)
                result.append(top.left.val)
            elif top.right and top.right is not lastPop:
                stack.append(top.right)
                result.append(top.right.val)
            else:
                stack.pop()
                lastPop = top
        return result

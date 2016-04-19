# Balanced Binary Tree
## Question
Given a binary tree, determine if it is height-balanced.

For this problem, a height-balanced binary tree is defined as a binary tree in which the depth of the two subtrees of every node never differ by more than 1.

## Solution
Solved by recursion (maxHeight):

1. Base case: node is NULL, balanced by default, return 0
2. If either one of the two subtrees has maxHeight of -1 (meaning its subtrees are not balanced); or the height difference between left and right subtrees is greater than 1, return -1 (not balanced)
3. This tree is balanced, return the real height: (max(l, r) + 1)

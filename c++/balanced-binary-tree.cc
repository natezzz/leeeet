/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool isBalanced(TreeNode* root) {
        if (root == NULL)
            return true;
        
        return (maxHeight(root) != -1);
    }
    
    int maxHeight(TreeNode* root) {
        if (root == NULL)
            return 0;
        
        int left = maxHeight(root->left);
        int right = maxHeight(root->right);
        
        // if either one of two subtrees' maxHeight is -1, then this node
        // is also -1
        if (left == -1 || right == -1 || abs(left - right) > 1) {
            return -1;
        }
        
        return max(left, right) + 1;
    }
};

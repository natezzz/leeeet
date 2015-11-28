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
    int maxDepth(TreeNode* root) {
        if (root == NULL) 
            return 0;
        
        int leftMax = maxDepth(root->left);
        int rightMax = maxDepth(root->right);
        
        return (leftMax > rightMax)? (leftMax+1) : (rightMax+1);
    }
};

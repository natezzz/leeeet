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
    bool hasPathSum(TreeNode* root, int sum) {
        if (root == NULL) {
            return false;   // handle stupid situation that a NULL list doesnt have sum 0
        }
        
        if (root->left == NULL & root->right == NULL) {
            return sum == (root->val);
        } else {
            return hasPathSum(root->left, sum-(root->val)) || hasPathSum(root->right, sum-(root->val));
        }
    }
};

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
    bool isSymmetric(TreeNode* root) {
        if (root == NULL)
            return true;
        return checkSymmetric(root->left, root->right);
    }
    
    bool checkSymmetric(TreeNode* nodeA, TreeNode* nodeB) {
        if (nodeA == NULL && nodeB == NULL)
            return true;
        
        if (nodeA == NULL || nodeB == NULL || (nodeA->val != nodeB->val))
            return false;
        
        return (checkSymmetric(nodeA->left, nodeB->right) &&
                checkSymmetric(nodeA->right, nodeB->left));
    }
};

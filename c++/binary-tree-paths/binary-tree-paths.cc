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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> result;
        if (root == NULL) {
            return result;
        }
        
        string path = std::to_string(root->val);
        walkList(root, result, path);
        return result;
    }
    
    void walkList(TreeNode* node, vector<string>& result, string path) {
        if (node->left == NULL && node->right == NULL) {
            result.push_back(path);
            return;
        }
        
        if (node->left != NULL) {
            walkList(node->left, result, path + "->" + std::to_string(node->left->val));
        }
        
        if (node->right != NULL) {
            walkList(node->right, result, path + "->" + std::to_string(node->right->val));
        }
    }
};

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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if (root == NULL)
            return result;
        
        visitNode(root, result, 0);
        return result;
    }
    
    void visitNode(TreeNode* node, vector<vector<int>>& result, int level) {
        if (node == NULL)
            return;
        
        addNode(node->val, result, level);
        visitNode(node->left, result, level+1);
        visitNode(node->right, result, level+1);
    }
    
    void addNode(int val, vector<vector<int>>& result, int level) {
        if (level >= result.size()) {
            vector<int> newLevel;
            newLevel.push_back(val);
            result.push_back(newLevel);
        } else {
            result[level].push_back(val);
        }
    }
};

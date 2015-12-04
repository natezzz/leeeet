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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> result;
        if (root == NULL)
            return result;
        visitNode(root, result, 0);
        std::reverse(result.begin(), result.end());
        return result;
    }
    
    void visitNode(TreeNode* node, vector<vector<int>>& resultList, int level) {
        if (node == NULL) {
            return;   // nothing to do on NULL node
        }
        addToResult(node->val, resultList, level);
        if (node->left != NULL || node->right != NULL) {
            visitNode(node->left, resultList, level+1);
            visitNode(node->right, resultList, level+1);
        }
    }
    
    void addToResult(int val, vector<vector<int>>& resultList, int level) {
        if (level >= resultList.size()) {
            vector<int> newLevel;
            newLevel.push_back(val);
            resultList.push_back(newLevel);
        } else {
            resultList[level].push_back(val);
        }
    }
};

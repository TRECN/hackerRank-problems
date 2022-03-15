/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void findPathSum(TreeNode* node, int targetSum, bool &hasPath)
    {
        if(node == NULL) return;
    
        findPathSum(node->left, targetSum - node->val, hasPath);
        findPathSum(node->right, targetSum - node->val, hasPath);
        
        if(node->left == NULL && node->right == NULL && targetSum - node->val == 0)
        {
            hasPath = true;
        }
    }
    
    bool hasPathSum(TreeNode* root, int targetSum) {
        bool hasPath = false;
        findPathSum(root, targetSum, hasPath);
        return hasPath;
    }
};
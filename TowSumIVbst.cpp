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
    bool findTarget(TreeNode* root, int k) {
        stack<TreeNode*> fwd_stack, rev_stack; 
        TreeNode* curr = root;
        while(curr != nullptr) {
            fwd_stack.push(curr);
            curr= curr->left;
        }
        
        curr = root;
        while(curr != nullptr) {
            rev_stack.push(curr);
            curr= curr->right;
        }
        
        while (!fwd_stack.empty() && !rev_stack.empty() && fwd_stack.top()->val != rev_stack.top()->val) {
            int sum = fwd_stack.top()->val + rev_stack.top()->val;
            if (sum == k) 
                return 1;
            if (sum < k) { 
                curr = fwd_stack.top();
                fwd_stack.pop();
                if (curr->right != nullptr) {
                    curr = curr->right;
                    while(curr != nullptr) {
                        fwd_stack.push(curr);
                        curr= curr->left;
                    }
                }

            } else { 
                curr = rev_stack.top();
                rev_stack.pop();
                if (curr->left != nullptr) {
                    curr = curr->left;
                    while(curr != nullptr) {
                        rev_stack.push(curr);
                        curr= curr->right;
                    }
                }
            }
        }
        return 0;
    }
};


class Solution {
public:
    vector<int>a;
    void pre(Node* root){
        if(root==NULL)
            return;
        a.push_back(root->val);
        for(auto i:root->children)
            pre(i);
    }
    vector<int> preorder(Node* root) {
        pre(root);
        return a;
    }
};
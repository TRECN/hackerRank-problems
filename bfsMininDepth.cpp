int minDepth(TreeNode* root) {
    if (root == NULL) return 0;
    queue<TreeNode*> q;
    q.push(root);
    int i = 0;
    while (!q.empty()) {
        i++;
        int k = q.size();
        for (int j=0; j<k; j++) {
            TreeNode* N = q.front();
            if (N->left) q.push(N->left);
            if (N->right) q.push(N->right);
            q.pop();
            if (N->left==NULL && N->right==NULL) 
                return i;
        }
    }
    return -1;
}
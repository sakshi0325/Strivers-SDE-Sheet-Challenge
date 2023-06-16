int Height(TreeNode *root)
    {
        if(root == NULL) return 0;
        return max(Height(root->left), Height(root->right))+1;
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        int i=0;
        int height = Height(root);
        vector<vector<int>> res(height);
        if(root==NULL) return res;
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        while(q.size()>1)
        {
            TreeNode *curr = q.front();
            q.pop();
            if(curr==NULL)
            {
                i++;
                q.push(NULL);
                continue;
            }
            res[i].push_back(curr->val);
            if(curr->left!=NULL) q.push(curr->left);
            if(curr->right!=NULL) q.push(curr->right);
        }
        return res;
    }
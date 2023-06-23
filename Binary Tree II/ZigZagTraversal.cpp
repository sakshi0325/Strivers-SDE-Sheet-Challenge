 vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if (root == nullptr)
        return result;
        
        queue<TreeNode*> q;
        stack<int> s;
        int i=0;
        bool flag = false;
        q.push(root);
        while(!q.empty())
        {
            int size = q.size();
            vector<int> v;    
            for(int i=0; i<size; i++)
            {
                TreeNode *curr = q.front();
                q.pop();
                if(!flag) v.push_back(curr->val);
                else s.push(curr->val);
                if(curr->left!=NULL) q.push(curr->left);
                if(curr->right!=NULL) q.push(curr->right);
            }
            if(flag)
            {
                while(!s.empty())
                {
                    v.push_back(s.top());
                    s.pop();
                }
            }
            flag = !flag;
            result.push_back(v);
        }
        return result;
    } 
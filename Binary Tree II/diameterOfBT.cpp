int maxdepth=0;
    int height(int maxDepth, TreeNode* root)
    {
        if(root==NULL)return 0;
        int lh=height(maxdepth,root->left);
        int rh=height(maxdepth,root->right);
        maxdepth=max(maxdepth,lh+rh);
        return 1+max(lh,rh);
        
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int ans=height(maxdepth,root);
        return maxdepth;
       
    }
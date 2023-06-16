 int maxDepth(TreeNode* root) {

  
  if (root == NULL)
    return 0;
  int leftDepth = maxDepth(root->left);
  int rightDepth = maxDepth(root->right);

 
  if (leftDepth > rightDepth)
    return leftDepth + 1;
  else
    return rightDepth + 1;
}

void f(TreeNode* root, vector<int>&preorder){
    if(!root)
        return;
    preorder.push_back(root->data);
    f(root->left,preorder);
    f(root->right,preorder);
    
}
vector<int> getPreOrderTraversal(TreeNode *root)
{
    // Write your code here.
    vector<int>preorder;
    f(root,preorder);
    return preorder;
}

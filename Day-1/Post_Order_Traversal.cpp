void f(TreeNode* root, vector<int>&postorder){
    if(!root)
        return;
    f(root->left,postorder);
    f(root->right,postorder);
    postorder.push_back(root->data);
}
vector<int> getPostOrderTraversal(TreeNode *root)
{
    // Write your code here.
    vector<int>postorder;
    f(root,postorder);
    return postorder;
}

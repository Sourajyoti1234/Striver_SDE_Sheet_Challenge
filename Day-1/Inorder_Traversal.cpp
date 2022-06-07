void f(TreeNode* root,vector<int>&ino){
    if(!root)return;
    f(root->left,ino);
    ino.push_back(root->data);
    f(root->right,ino);
}
vector<int> getInOrderTraversal(TreeNode *root)
{
    // Write your code here.
    vector<int>ino;
    f(root,ino);
    return ino;
}

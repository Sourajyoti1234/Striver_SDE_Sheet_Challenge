void f(TreeNode<int>*root,vector<int>&ans,int level)
{
    if(root==NULL)
        return;
    if(level==ans.size())
        ans.push_back(root->data);
    f(root->left,ans,level+1);
    f(root->right,ans,level+1);
}
vector<int> getLeftView(TreeNode<int> *root)
{
    //    Write your code here
    vector<int>ans;
    f(root,ans,0);
    return ans;
}

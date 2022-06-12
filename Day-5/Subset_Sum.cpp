void f(int i,vector<int>&num,vector<int>&ans,int cursum){
    if(i<0){
        ans.push_back(cursum);
        return;
    }
    f(i-1,num,ans,cursum+num[i]);
    f(i-1,num,ans,cursum);
}
vector<int> subsetSum(vector<int> &num)
{
    // Write your code here.
    //sort(num.begin(),num.end(),greater<int>());
    vector<int>ans;
    f(num.size()-1,num,ans,0);
    sort(ans.begin(),ans.end());
    return ans;
}

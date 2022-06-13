#include<bits/stdc++.h>
void f(int index,vector<int>&v,vector<vector<int>>&ans,vector<int>aux){
    if(index==v.size()){
        ans.push_back(aux);
        return; 
    }
    aux.push_back(v[index]);
    f(index+1,v,ans,aux);
    aux.pop_back();
    f(index+1,v,ans,aux);
}
vector<vector<int>> pwset(vector<int>v)
{
    //Write your code here
    vector<vector<int>>ans;
    f(0,v,ans,{});
    sort(ans.begin(),ans.end());
    return ans;
}

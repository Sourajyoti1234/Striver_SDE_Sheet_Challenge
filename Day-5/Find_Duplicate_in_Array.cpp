#include <bits/stdc++.h> 
int findDuplicate(vector<int> &arr, int n){
	// Write your code here.
    unordered_map<int,int>m;
    for(auto i:arr)
        m[i]++;
    int ans=-1;
    for(auto i:arr)
        if(m[i]>1)
            ans=i;
    return ans;
}

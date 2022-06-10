#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    long long int  ans,cursum;
    ans=0;
    cursum=0;
    for(int i=0;i<n;i++){
        cursum+=arr[i];
        if(ans<cursum)
            ans=cursum;
        if(cursum<0)
            cursum=0;
    }
    return ans;
}

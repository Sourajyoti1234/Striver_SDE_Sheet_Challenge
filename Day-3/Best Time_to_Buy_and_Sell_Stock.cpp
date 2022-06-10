#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    // Write your code here.
    int n=prices.size();
    int mx_profit=INT_MIN;
    int curr_val=INT_MAX;
    for(int i=0;i<n;i++){
        curr_val=min(curr_val,prices[i]);
        int diff=prices[i]-curr_val;
        mx_profit=max(mx_profit,diff);
    }
    return mx_profit;
}

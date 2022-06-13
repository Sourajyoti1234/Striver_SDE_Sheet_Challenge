bool subk(int n,vector<int>a,int target,vector<vector<bool>>&dp){
	for(int i=0;i<n;i++){
		dp[i][0]=true;
	}
	dp[0][a[0]]=true;
	for(int i=1;i<n;i++){
		for(int j=1;j<=target;j++){
			bool not_take=dp[i-1][j];
			bool take=false;
			if(a[i]<=j)
			  take=dp[i-1][j-a[i]];
			dp[i][j]=(take|not_take);
		}
	}
	return dp[n-1][target];
}
bool subsetSumToK(int n, int k, vector<int> &arr) {
    // Write your code here.
	vector<vector<bool>>dp(n,vector<bool>(k+1,0));
	return subk(n,arr,k,dp);
}

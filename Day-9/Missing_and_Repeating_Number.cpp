#include <bits/stdc++.h> 

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	int a,b;
    vector<bool>temp(arr.size(),false);
    for(int i=0;i<arr.size();i++){
        if(temp[arr[i]])a=arr[i];
        temp[arr[i]]=true;
    }
    for(int i=1;i<=arr.size();i++){
        if(temp[i]==false)b=i;
    }
    return {b,a};
}

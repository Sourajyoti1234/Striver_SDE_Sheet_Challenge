#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   //   Write your code here
    int l=0;
    int m=0;
    int h=n-1;
    while(m<=h){
        if(arr[m]==1)
            m++;
        else if(arr[m]==0)
            swap(arr[l++],arr[m++]);
        else
            swap(arr[m],arr[h--]);
    }
}

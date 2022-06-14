#include <bits/stdc++.h> 
#include <vector>

bool findTargetInMatrix(vector < vector < int >> & mat, int m, int n, int target) {
    // Write your code here.
   int l=0;
   int h=n-1;
   while(l<m && h>=0){
       if(mat[l][h]==target)return true;
       else if(mat[l][h]>target)
           h--;
       else
           l++;
   }
    return false;
    
}

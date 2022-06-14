#include <bits/stdc++.h> 
void setZeros(vector<vector<int>> &matrix)
{
	int row=matrix.size();
     int column=matrix[0].size();
        bool col=true;
     for(int i=0;i<row;i++){
         if(matrix[i][0]==0)
             col=false;
         for(int j=1;j<column;j++){
             if(matrix[i][j]==0)
                 matrix[i][0]=matrix[0][j]=0;
         }
     }
     for(int i=row-1;i>-1;i--){
         for(int j=column-1;j>0;j--){
             if(matrix[i][0]==0 || matrix[0][j]==0)
                 matrix[i][j]=0;
            
         }
         if(col==false)matrix[i][0]=0;
     }  
}

#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
	int row = matrix.size();
	int col = matrix[0].size();
	int col0 = 1;
	for(int i=0;i<row;i++){
		if(matrix[i][0]==0)col0=0;
		for(int j = 1; j<col; j++){
			if(matrix[i][j]==0){
				matrix[0][j]=0;
				matrix[i][0]=0;
			}
		}
	}
	
	for(int i = row-1; i>=0; i--){
		for(int j = col-1; j>=1; j--){
			if(matrix[0][j]==0 || matrix[i][0]==0) matrix[i][j]=0;
			
		}
		if(col0==0)matrix[i][0]=0;
	}
}
/////////////////////////////////////////
1 3 5 6
0 3 1 4
2 0 3 1
 
1  | 0 5 6
0  | 3 1 4
0  | 0 3 1
col0 = 0; row = 0, col = 1;

0  | 0 5 6
0  | 0 0 0
0  | 0 0 0 <- back itteration
col0 == 0 so mat[i][0] = 0;

T.C = O(mn)
S.C = O(1)
/////////////////////////////////////////

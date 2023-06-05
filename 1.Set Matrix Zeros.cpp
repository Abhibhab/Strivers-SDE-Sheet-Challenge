#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{
	map<int,int>aa,bb;

	int n=matrix.size();
	int m=matrix[0].size();
        for (int i = 0; i < n; i++) {
          for (int j = 0; j < m; j++) {
			  if(matrix[i][j]==0){
				  aa[i]++;
				  bb[j]++;
			  }
          }
        }
        for (int i = 0; i < n; i++) {
          for (int j = 0; j < m; j++) {
			  if(aa.find(i)!=aa.end() || bb.find(j)!=bb.end()){
				  matrix[i][j]=0;
			  }

          }
        }

        // Write your code here.
}

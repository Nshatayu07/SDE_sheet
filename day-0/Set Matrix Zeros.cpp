#include <bits/stdc++.h> 
vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m) {
	// Write your code here.
	set<int> row, column;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(matrix[i][j]==0){
				row.insert(i);
				column.insert(j);
			}
		}
	}

	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(row.find(i)!=row.end() || column.find(j)!=column.end()) matrix[i][j]=0;
		}
	}

	return matrix;
}
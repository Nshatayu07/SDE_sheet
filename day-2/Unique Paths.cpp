#include <bits/stdc++.h> 

int solve(int n, int m, int i, int j, vector<vector<int>> &dp){
	if(i==n-1 and j==m-1) return 1;

	if(i>=n or j>=m) return 0;

	if(dp[i][j]!=-1) return dp[i][j];

	return dp[i][j] =  solve(n,m,i+1,j, dp) + solve(n,m,i,j+1,dp);
}

int uniquePaths(int m, int n) {
	// Write your code here.
		vector<vector<int>> dp;
        for(int i=0;i<=m;i++){
            vector<int> a;
            for(int j=0;j<=n;j++){
                a.push_back(-1);
            }
            dp.push_back(a);
        }	
		return solve(m,n,0,0, dp);
} 
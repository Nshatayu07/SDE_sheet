#include <bits/stdc++.h>
using namespace std;
pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
	unordered_map<int, int> m;
	for(int i=0;i<n;i++){
		m[arr[i]]++;
	}

	int *ans = new int[2];
	for(int i=1;i<=n;i++){
		if(m[i]>1){
			ans[1] = i;
		}
		else if(m[i]==0){
			ans[0] = i;
		}
	}
	
	return {ans[0], ans[1]};
	
}

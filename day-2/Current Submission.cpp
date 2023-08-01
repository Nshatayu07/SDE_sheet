#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n){
	// Write your code here.
	unordered_map<int, int> m;
	for(auto i: arr){
		m[i]++;
		if(m[i]>1){
			return i;
		}
	}
	return 0;

}

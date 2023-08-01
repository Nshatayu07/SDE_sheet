#include<vector>

void mergeTwoSortedArraysWithoutExtraSpace(vector<long long> &a, vector<long long> &b){
	// Write your code here.
	for(auto i: b){
		a.push_back(i);
	}

	sort(a.begin(), a.end());
	
}
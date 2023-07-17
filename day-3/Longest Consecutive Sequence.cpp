#include <bits/stdc++.h>

int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    // Write your code here.
    int count=1, ans=1;
    sort(arr.begin(), arr.end());
    for(int i=1;i<n;i++){
        if(arr[i]-arr[i-1]==1) count++;
        else if(arr[i]-arr[i-1]==0) continue;
        else{
            ans = max(ans, count);
            count=1;
        }
    }
    ans = max(ans, count);

    return ans;
}
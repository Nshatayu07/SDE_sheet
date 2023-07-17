#include <bits/stdc++.h>
using namespace  std;
int subarraysWithSumK(vector < int > a, int b) {
    // Write your code here
    int ans=0;
    int xr=0;
    unordered_map<int, int> m;
    m[xr]++;
    int n = a.size();
    for(int i=0;i<n;i++){
       xr=xr^a[i];
       int x = xr^b;
       ans+=m[x];
       m[xr]++;
    }
    return ans;
}
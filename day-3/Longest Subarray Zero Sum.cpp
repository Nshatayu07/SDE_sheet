#include <bits/stdc++.h>

int LongestSubsetWithZeroSum(vector<int> arr) {

  // Write your code here
  int ans = 0, sum = 0;
  unordered_map<int, int> m;
  int n = arr.size();
  m[0] = -1;
  for (int i = 0; i < n; i++) {
    sum += arr[i];
    if (m.find(sum) != m.end()) {
      ans = max(ans, i - m[sum]);
    } else {
      m[sum] = i;
    }
  }

  return ans;
}
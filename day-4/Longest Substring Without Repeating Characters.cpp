#include <bits/stdc++.h> 
int uniqueSubstrings(string input)
{
    //Write your code here
    int ans=0, count=0;
    set<char> s;
    int start=0, end=0;
    int n = input.size();
    while(start<n){
        if(s.find(input[start])==s.end()){
            count++;
            s.insert(input[start]);
            start++;
            ans = max(ans, count);
        }
        else{
            s.erase(input[end]);
            count--;
            end++;
        }
    }
    return ans;
}
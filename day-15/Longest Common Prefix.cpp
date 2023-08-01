class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        int ans = s[0].size();
        for(int i=1;i<s.size();i++){
            int j=0;
            while(j<s[i].size() and s[0][j]==s[i][j]){
                j++;
            }
            ans=min(ans,j);
        }

        return s[0].substr(0,ans);
    }
};
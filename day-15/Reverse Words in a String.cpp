class Solution {
public:
    string reverseWords(string s) {
        vector<string> v;
        s+=' ';
        string t="";
        int i=0;
        while(s[i]==' ') i++;

        for(int j=i;j<s.size();j++){
            if(s[j]==' '){
                while(s[j]==' ') j++;
                v.push_back(t);
                t.clear();
                j--;
            }else{
                t+=s[j];
            }
        }
        string ans="";
        for(int i=v.size()-1;i>=0;i--){
            ans+=v[i];
            ans+=' ';
        }
        ans.pop_back();
        
        
        return ans;
    }
};
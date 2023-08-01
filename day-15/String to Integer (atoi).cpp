class Solution {
public:
    int myAtoi(string s) {
        int i=0;
        int pos=0;
        int neg=0;
        while(s[i]==' ') i++;
        int sign=0;
        if(s[i]=='+'){ pos++;i++;}
        if(s[i]=='-'){neg++; i++;}
        if(pos>0 and neg>0) return 0;
        double ans=0;
        while(i<s.size()  && (s[i]>='0' and s[i]<='9')){
            ans*=10;
            ans+=s[i]-'0';
            i++;
        }
        if(neg>0) ans*=-1;
        // if(ans)
        if(ans>INT_MAX){
            ans=INT_MAX;
        }
        if(ans<INT_MIN) ans=INT_MIN;
        
        return ans;
    }
};
class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        int n = a.size();
        int m = b.size();
        int count=1;
        if(a==b) return count;
        if(n>m){
            if(a.find(b)!=string::npos) return count;
        }
        int c = m/n;
        string s=a;
        if(m%n) c++;
        while(c--){
            a+=s;
            count++;
        // cout<<a<<endl;
            if(a.find(b)!=string::npos) return count;
        }
        a+=a;
        if(a.find(b)!=string::npos) return count;
        return -1;
    }
};
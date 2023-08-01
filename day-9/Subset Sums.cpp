//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:

    void solve(vector<int> arr, int n, vector<vector<int>> &ans, vector<int> v, int i){
        if(i>=n){
            ans.push_back(v);
            return ;
        }
        
        solve(arr, n, ans, v, i+1);
        
        int a = arr[i];
        v.push_back(a);
        solve(arr, n, ans, v, i+1);
    }

    vector<int> subsetSums(vector<int> arr, int n)
    {
        // Write Your Code here
        vector<int> v;
        vector<vector<int>> ans;
        solve(arr, n, ans, v, 0);
        
        vector<int> res;
        
        for(auto i : ans){
            
            int sum=0;
            for(auto j:i){
                // cout<<j<<" ";
                sum+=j;
            }
            // cout<<endl;
            res.push_back(sum);
        }
        return res;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends
#include<bits/stdc++.h>
using namespace std;
vector<int> nextGreaterPermutation(vector<int> &A) {
    // Write your code here.
    int n = A.size();
    int i=0,j=0;
    // bool flag=false;
    for(i=n-2;i>=0;i--){
        if(A[i]<A[i+1]){
            // flag  =true;
            break;
        }
    }
    if(i<0){
        reverse(A.begin(), A.end());
    }
    else{
        for(j=n-1;j>i;j--){
        if(A[j]>A[i]){
            break;
        }
    }
        swap(A[j], A[i]);
        reverse(A.begin()+i+1, A.end());
    }
    

    return A;
}
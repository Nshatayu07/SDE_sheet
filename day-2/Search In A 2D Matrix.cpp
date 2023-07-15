bool searchMatrix(vector<vector<int>>& mat, int target) {
    int index=0;
    int n = mat.size();
    for(int i=1;i<n;i++){
        if(mat[i][0]>=target){
            if(mat[i][0]==target) return true;
            index = i-1;
            break;
        }
    }
    for(int i=0;i<mat[0].size();i++){
        if(mat[index][i]==target) return true;
    }

    for(int i=0;i<mat[0].size();i++){
        if(mat[n-1][i]==target) return true;
    }

    return false;

}
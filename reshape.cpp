class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<int>mat1;
        for (int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                mat1.push_back(mat[i][j]);
            }
        }
        vector<vector<int>>result(r,vector<int>(c));
        int k=0;
        for (int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                result[i][j]=mat1[k];
                k++;
            }
        }
        return result;

    }
};
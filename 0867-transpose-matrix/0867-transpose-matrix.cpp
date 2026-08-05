class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int n=matrix.size(),m=matrix[0].size();
        int nRow=m,nCol=n;
        vector<vector<int>> transpose(nRow,vector<int>(nCol,0));
        for(int i=0;i<nRow;i++){
            for(int j=0;j<nCol;j++){
                transpose[i][j]=matrix[j][i];
            }
        }
        return transpose;
    }
};
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        vector<int>ans;
        int n=mat.size(),m=mat[0].size();

        int srow=0,scol=0,erow=n-1,ecol=m-1;

        int mul=n*m,cnt=0;
        while(cnt<mul){
            // srow print
            for(int j=scol;j<=ecol && cnt<mul;j++){
                ans.push_back(mat[srow][j]);
                cnt++;
            }
            srow++;
            // ecol print
            for(int i=srow;i<=erow && cnt<mul;i++){
                ans.push_back(mat[i][ecol]);
                cnt++;
            }
            ecol--;
            // erow print
            for(int j=ecol;j>=scol && cnt<mul;j--){
                ans.push_back(mat[erow][j]);
                cnt++;
            }
            erow--;
            // scol print
            for(int i=erow;i>=srow && cnt<mul;i--){
                ans.push_back(mat[i][scol]);
                cnt++;
            }
            scol++;
        }
        return ans;
    }
};
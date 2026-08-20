class Solution {
public:
    vector<int>generateCol(int row){
        vector<int>ansCol;
        ansCol.push_back(1);
        long long ans=1;
        for(int col=1;col<row;col++){
            ans=ans*(row-col);
            ans=ans/col;
            ansCol.push_back(ans);
        }
        return ansCol;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        for(int i=1;i<=numRows;i++){
            ans.push_back(generateCol(i));
        }
        return ans;
    }
};
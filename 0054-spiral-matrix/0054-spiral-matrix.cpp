class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
     
        int n=matrix.size(),m=matrix[0].size();
        int ele=n*m;
        int top=0,bottom=n-1,left=0,right=m-1;
           vector<int>ans;

        while(ele>0){

            for(int idx=left;idx<=right && ele>0;idx++){
                ans.push_back(matrix[top][idx]);
                ele--;
            }
            top++;
            for(int idx=top;idx<=bottom && ele>0;idx++){
                ans.push_back(matrix[idx][right]);
                ele--;
            }
            right--;
            for(int idx=right;idx>=left && ele>0;idx--){
                ans.push_back(matrix[bottom][idx]);
                ele--;
            }
            bottom--;
            for(int idx=bottom;idx>=top && ele>0;idx--){
                ans.push_back(matrix[idx][left]);
                ele--;
            }
            left++;
        }
        return ans;
    }
};
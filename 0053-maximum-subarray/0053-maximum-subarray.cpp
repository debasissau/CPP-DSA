// class Solution {
// public:
//     int maxSubArray(vector<int>& nums) {
//         long long maxi=INT_MIN;
//         long long sum=0;
//         for(int i=0;i<nums.size();i++){
//             sum+=nums[i];
//             if(sum>maxi)maxi=sum;
//             if(sum<0)sum=0;
//         }
//         return maxi;
//     }
// };



// if you have to find the maximum_sum's starting and ending index 
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        long long maxi=INT_MIN;
        long long sum=0;
        int st=-1,en=-1;
        for(int i=0;i<nums.size();i++){
            if(sum==0)st=i;
            sum+=nums[i];
            if(sum>maxi){
                maxi=sum;
                en=i;
            }
            if(sum<0)sum=0;
        }
        cout<<st<<" "<<en;
        return maxi;
    }
};    
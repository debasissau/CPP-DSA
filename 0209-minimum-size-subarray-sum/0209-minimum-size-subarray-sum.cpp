class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int ans=INT_MAX;
        int s=0,sum=0;
        for(int e=0;e<nums.size();e++){
            sum+=nums[e];
            while(sum >= target){
                ans=min(ans,e-s+1);
                sum=sum-nums[s];
                s++;
            }
        }
        return (ans==INT_MAX)?0:ans;
    }
};
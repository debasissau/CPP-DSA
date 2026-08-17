class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int idx=-1;
        int n=nums.size();
        // find break point
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                idx=i;
                break;
            }
        }
        if(idx==-1){ // no break point found -> revere it and return 
        reverse(nums.begin(),nums.end());
        return;
        }

        // find nearest largest value of nums[idx]
        for(int i=n-1;i>idx;i--){
            if(nums[i]>nums[idx]){
                swap(nums[i],nums[idx]);
                break;
            }
        }

        // take the minimum value from the combintaion of idx+1 to n-1 elements means reverse (isx+1 to n-1)
        reverse(nums.begin()+idx+1,nums.end());

    }
};
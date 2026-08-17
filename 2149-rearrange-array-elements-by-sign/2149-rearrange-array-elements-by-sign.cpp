class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        
        int n=nums.size();
        vector<int>pos,neg,ans(n,0);
        for(int i=0;i<n;i++){
            if(nums[i]>0)pos.push_back(nums[i]);
            else neg.push_back(nums[i]);
        }
        int a=0,b=0;
        for(int i=0;i<n;i++){
            if(i%2==0)ans[i]=pos[a++];
            else ans[i]=neg[b++];
        }
        return ans;

    }
};
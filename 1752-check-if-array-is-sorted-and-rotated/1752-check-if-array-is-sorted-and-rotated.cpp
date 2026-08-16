class Solution {
public:
    bool check(vector<int>& nums) {
        int breaks = 0;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            if (nums[i] > nums[(i + 1)%n]) {   //when i = n-1 ; i+1 = n (out of bound) so (n+1)%n = 0  which makes circular chexk ,  ex2 -> i=n-1=4; i+1 = n%n =0 = 2 , so 4>2 , breaks ++;
                breaks++;
            }
        }

        return breaks <= 1;  // breaks ==0 -> sorted // breaks ==1 -> circular sorted  ( 5>1)-> one break  else not sorted
    }
};
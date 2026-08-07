class Solution {
public:
    vector<int> findMissingElements(vector<int>& arr) {
        unordered_set<int>st;
        int mini=INT_MAX,maxi=INT_MIN;
        for(int i=0;i<arr.size();i++){
            st.insert(arr[i]);
            mini=min(mini,arr[i]);
            maxi=max(maxi,arr[i]);
        }
        vector<int>ans;
        for(int val=mini+1;val<maxi;val++){
            if(!st.count(val))ans.push_back(val);
        }
        return ans;
    }
};
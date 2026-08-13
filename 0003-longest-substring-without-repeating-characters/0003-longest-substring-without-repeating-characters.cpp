class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<int>st;
        int i=0,ans=0;
        for(int j=0;j<s.size();j++){
            char ch=s[j];
            while(st.count(ch)){
                st.erase(s[i++]);
            }
            st.insert(s[j]);
            ans=max(ans,j-i+1);
        }
        return ans;
    }
};
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<int>st;
        int n=0;
        int i=0,ans=0;
        for(int j=0;j<s.size();j++){
            char ch=s[j];
            while(st.count(ch)){
                st.erase(s[i++]);
                n--;
            }
            st.insert(s[j]);n++;
            ans=max(ans,n);
        }
        return ans;
    }
};
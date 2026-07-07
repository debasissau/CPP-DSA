/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    void solve(ListNode* &i,ListNode* j, int &ans){
        if(j==NULL)return;
        solve(i,j->next,ans);
        ans=max(ans,i->val+j->val);
        cout<<i->val<<" ";
        i=i->next;
    }
    int pairSum(ListNode* head) {
        ListNode* i=head;
        ListNode* j=head;
        int ans=0;
        solve(i,j,ans);
        return ans;
    }
};
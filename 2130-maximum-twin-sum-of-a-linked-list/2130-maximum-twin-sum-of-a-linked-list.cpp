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
    int pairSum(ListNode* head) {
        
        vector<int>v;
        while(head){
            v.push_back(head->val);
            head=head->next;
        }
        int n=v.size();
        int ans=INT_MIN;
        
        int l=0;
        int r=n-1;
        while(l<r){
          
          ans=max(ans,v[l]+v[r]);
          l++;r--;

        }
        return ans;
    }
};
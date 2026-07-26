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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        set<int>a(nums.begin(),nums.end());
        ListNode *t=head;
        ListNode*dum=new ListNode(-1);
        dum->next=head;
        ListNode*c=dum;
        while(t)
        {
            if(a.count(t->val))
            {
                c->next=t->next;
            }
            else
            {
                c=t;
            }
            t=t->next;
        }
        return dum->next;

        
    }
};
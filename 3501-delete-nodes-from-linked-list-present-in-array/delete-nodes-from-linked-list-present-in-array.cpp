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
        ListNode *p=nullptr;
        while(t)
        {

            if(a.count(t->val))
            {
                if(t==head) head=head->next;
                else {
                   if(p) p->next=t->next;
                }

            }
            else {
                p=t;
            }
            t=t->next;
        }
        return head;

        
    }
};
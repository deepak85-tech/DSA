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
    ListNode* mergeNodes(ListNode* head) {
        ListNode*dum=new ListNode(-1);
        ListNode *t=dum;
        ListNode *temp=head->next;
        int s=0;
        while(temp)
        {
            if(temp->val==0)
            {
                t->next=new ListNode(s);
                t=t->next;
                s=0;
            }
            else
            {
                s=s+temp->val;
                
            }
            temp=temp->next;
        }
        return dum->next;
        
    }
};
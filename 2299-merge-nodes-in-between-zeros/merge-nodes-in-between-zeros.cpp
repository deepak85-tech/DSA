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
        ListNode*first=head->next;
        ListNode *temp=head->next;
        ListNode *p=nullptr;
        int s=0;
        while(temp)
        {
            if(temp->val==0)
            {
                first->val=s;
                p=first;
                first=first->next;
                s=0;
            }
            else
            {
                s=s+temp->val;
                
            }
            temp=temp->next;
        }
        p->next=nullptr;
        return head->next;
    }
};
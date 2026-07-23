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
    ListNode *middle(ListNode *head)
    {
        ListNode*slow=head;
        ListNode *fast=head->next;
        while(fast!=nullptr && fast->next!=nullptr)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
    ListNode*merge(ListNode*l1,ListNode*l2)
    {
        ListNode *d=new ListNode(-1);
        ListNode*curr=d;
        while(l1!=nullptr && l2!=nullptr)
        {
            if(l1->val<l2->val)
            {
                curr->next=l1;
                l1=l1->next;
            }
            else
            {
                curr->next=l2;
                l2=l2->next;
            }
            
            curr=curr->next;
        }
        if(l1!=nullptr) curr->next=l1;
            else curr->next=l2;
        return d->next;
    } 
    ListNode* sortList(ListNode* head) {
        if(head==nullptr || head->next==nullptr) return head;
        ListNode *mid=middle(head);
        ListNode *right=mid->next;
        mid->next=nullptr;
        ListNode *left=head;
        ListNode *ls=sortList(left);
        ListNode *rs=sortList(right);
        return merge(ls,rs);

    }
};
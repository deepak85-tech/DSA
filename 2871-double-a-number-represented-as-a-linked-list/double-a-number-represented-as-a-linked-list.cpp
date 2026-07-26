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
    ListNode* reversee(ListNode*head)
    {
        ListNode*t=head;
        ListNode*p=nullptr;
        while(t!=nullptr)
        {
            ListNode*n=t->next;
            t->next=p;
            p=t;
            t=n;
        }
        return p;
    }
    ListNode* doubleIt(ListNode* head) {
        head=reversee(head);
        ListNode*temp=head;
        int carry=0;
        ListNode *dummy=new ListNode(-1);
        ListNode *cc=dummy;
        while(temp!=nullptr)
        {
            int m=(temp->val*2)+carry;
            if(m<10)
            {
                cc->next=new ListNode(m);
                if(cc)cc=cc->next;
                carry=m/10;
            }
            else
            {
                cc->next=new ListNode(m%10);
                if(cc)cc=cc->next;
                carry=1;
            }
            temp=temp->next;
        }
        if(carry==1)
        {
            cc->next=new ListNode(1);
            if(cc)cc=cc->next;
        }
       return  reversee(dummy->next);
        
    }
};
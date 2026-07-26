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
    ListNode*rever(ListNode*tail)
    {
        ListNode*p=nullptr;
        ListNode*t=tail;
        while(t!=nullptr)
        {
            ListNode*n=t->next;
            t->next=p;
            p=t;
            t=n;
        }
        return p;
    }
    ListNode*Middle(ListNode *head)
    {
        ListNode*s=head;
        ListNode*f=head->next;
        while(f!=nullptr && f->next!=nullptr)
        {
            s=s->next;
            f=f->next->next;
        }
        return s;
    }
    int pairSum(ListNode* head) {
        int s=0,m=INT_MIN;
        ListNode* t=head;
        ListNode*mid=Middle(head);
        ListNode *ppp=head;
        ListNode*tt=mid->next;
        mid->next=nullptr;
        tt=rever(tt);
        while(ppp&&tt)
        {
            s=ppp->val+tt->val;
            m=max(m,s);
            ppp=ppp->next;
            tt=tt->next;
        }
        return m;
        
    }
};
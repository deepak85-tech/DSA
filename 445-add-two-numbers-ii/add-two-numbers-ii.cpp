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
    ListNode *revers(ListNode *l1)
    {
        ListNode *t=l1;
        ListNode *p=nullptr;
        while(t!=nullptr)
        {
            ListNode *z=t->next;
            t->next=p;
            p=t;
            t=z;
        }
        return p;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *dum=new ListNode(-1);
        ListNode *cur=dum;
        l1=revers(l1);
        l2=revers(l2);
        int curry=0;
        while(l1!=nullptr || l2!=nullptr || curry!=0)
        {
            int s=curry;
            if(l1!=nullptr)
            {
                s=s+l1->val;
                l1=l1->next;
            }
            if(l2!=nullptr)
            {
                s=s+l2->val;
                l2=l2->next;
            }
            curry=s/10;
            cur->next=new ListNode(s%10);
            cur=cur->next;
        }
       
        return revers(dum->next);

    }
};
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
    ListNode *rever(ListNode*head)
    {
        ListNode*temp=head;
        ListNode *p=nullptr;
        while(temp!=nullptr)
        {
            ListNode*nn=temp->next;
            temp->next=p;
            p=temp;
            temp=nn;
        }
        return p;
    }
    ListNode *getkth(ListNode* temp,int k)
    {
        k=k-1;
        while(temp!=nullptr && k>0)
        {
            k--;
            temp=temp->next;
        }
        return temp;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        
        ListNode *temp=head;
        ListNode*p=nullptr;
        while(temp)
        {
            ListNode*kthn=getkth(temp,k);
            if(kthn==nullptr)
            {
                if(p)p->next=temp;
                break;
            }
            ListNode*next=kthn->next;
            kthn->next=nullptr;
            rever(temp);
            if(temp==head)
            {
                head=kthn;
            }
            else
            {
                p->next=kthn;
            }
            p=temp;
            temp=next;
        }
        return head;
    }
};
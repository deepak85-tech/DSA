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
    ListNode *revers(ListNode*temp)
    {
        ListNode *p=nullptr;
        ListNode *h=temp;
        while(h!=nullptr)
        {
            ListNode*u=h->next;
            h->next=p;
            p=h;
            h=u;
        }
        return p;
    }
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (!head||left==right) return head;
        ListNode*f=nullptr;
        ListNode*l=nullptr;
        ListNode *temp=head;
        ListNode*ff=nullptr;
        int pos=1;
        while(temp!=nullptr)
        {
            if(pos==left-1)
            {
                f=temp;
               
            }
            if(pos==left)
            {
                ff=temp;
            }
          
            if(right==pos)
            {

                l=temp->next;
                temp->next=nullptr;
                break;
            
            }
            pos++;
            temp=temp->next;
        }
         ListNode *nn;

        if(f)
            nn=revers(f->next);
        else
            nn=revers(head);

        if(f)
            f->next=nn;
        else
            head=nn;

        ff->next=l;

        return head;
        
    }
};
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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head||!head->next||k==0)return head;
        ListNode *tail=head;
        int c=1;
        while(tail->next!=nullptr)
        {
            tail=tail->next;
            c++;
        }
        tail->next=head;
        k=k%c;
        int ans=c-k;
        
        ListNode *tt=tail;
        while(ans--)
        {
            tt=tt->next;
        }
       ListNode *hhead=tt->next;
        tt->next=nullptr;
        return hhead;

        
    }
};
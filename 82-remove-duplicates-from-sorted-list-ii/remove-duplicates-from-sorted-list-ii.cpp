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
    ListNode* deleteDuplicates(ListNode* head) {
         if (head==nullptr || head->next==nullptr)
            return head;

        ListNode* dummy=new ListNode(0);
        dummy->next=head;

        ListNode* p=dummy;
        ListNode* s=head;
        ListNode* f=head->next;
        int c=0;

        
        while (s!=nullptr) {

            if (f!=nullptr && s->val==f->val) {

                ListNode* temp=f;
                f=f->next;
                delete temp;
                s->next=f;
                c++;
            }
            else {

                if (c>0) {
                    ListNode* temp = s;
                    s=f;
                    p->next=s;
                    delete temp;
                    if(f!=nullptr)f=f->next;
                    c=0;
                }
                else {
                    p=s;
                    s=f;
                    if(f!=nullptr)f=f->next;
                }

            }
        }

        return dummy->next;
        
       
        
    }
};
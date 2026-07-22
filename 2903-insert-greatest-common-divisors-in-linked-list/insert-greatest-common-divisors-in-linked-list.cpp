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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode *temp=head;
       
        while(temp!=nullptr &&temp->next!=nullptr)
        {
            int a=temp->val;
            int b=temp->next->val;
            int z=gcd(a,b); 

            ListNode *aa=new ListNode(z);
            aa->next=temp->next;
            temp->next=aa;
            temp=aa->next;

        }
        return head;
        
    }
};
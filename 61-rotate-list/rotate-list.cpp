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
        vector<int>a;
        ListNode*t=head;
        int c=0;
        while(t!=nullptr)
        {
            a.push_back(t->val);
            t=t->next;
            c++;
        }
        if(head==nullptr) return nullptr;
        k=k%c;
        reverse(a.begin(),a.end());
        reverse(a.begin(),a.begin()+k);
        reverse(a.begin()+k,a.end());
        int i=0;
        ListNode*temp=head;
        while(temp!=nullptr)
        {
            temp->val=a[i];
            temp=temp->next;
            i++;
        }
        return head;

        
    }
};
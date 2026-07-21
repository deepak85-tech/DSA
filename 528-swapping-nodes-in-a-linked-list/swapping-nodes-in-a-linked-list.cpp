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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *t=head;
        int w=k;
        int c=0;
        while(t!=nullptr)
        {
            c++;
            t=t->next;
        }
        int r=c-k;
        ListNode *fi=head;
        ListNode *se=head;
       
        while(fi!=nullptr&&w>1)
        {
            w--;
            fi=fi->next;
        }
        while(se!=nullptr && r>0)
        {
            r--;
            se=se->next;
        }
        int tt=fi->val;
        fi->val=se->val;
        se->val=tt;
        return head;

        
    }
};
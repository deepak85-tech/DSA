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
    ListNode* mergee(ListNode*l1,ListNode*l2)
    {
        ListNode *dum=new ListNode(0);
        ListNode *temp=dum;
        while(l1!=nullptr && l2!=nullptr)
        {
            if(l1->val<l2->val)
            {
                if(l1!=nullptr)temp->next=l1;
                l1=l1->next;
            }
            else
            {
               if(l2!=nullptr) temp->next=l2;
                l2=l2->next;
            }
            temp=temp->next;
        
        }
        if(l1!=nullptr) temp->next=l1;
        else temp->next=l2;
         return dum->next;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.empty()) return nullptr;
        int n=lists.size();
        ListNode*fir=lists[0];
        for(int i=1;i<n;i++)
        {
            ListNode *ll=lists[i];
            fir=mergee(fir,ll);  
        }
        return fir;

        
    }
};
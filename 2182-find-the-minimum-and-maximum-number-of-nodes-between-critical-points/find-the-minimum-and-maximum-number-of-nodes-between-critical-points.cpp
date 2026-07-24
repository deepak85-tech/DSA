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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int>a;
        if(head==nullptr || head->next==nullptr || head->next->next==nullptr) return {-1,-1};
        int mi=INT_MAX,c=1,m=INT_MIN,mid=INT_MAX,pr=-1;
        ListNode *p=head;
        ListNode *cc=head->next;
        ListNode*n=head->next->next;
        while(n!=nullptr)
        {
            c++;
            if(((cc->val>p->val)&&(cc->val>n->val))||((cc->val<p->val)&&(cc->val<n->val)))
            {
                mi=min(mi,c);
                m=max(m,c);
                if (pr!=-1) {
                    mid=min(mid,c-pr); 
                }
                pr=c;
            }
            p=p->next;
            cc=cc->next;
            n=n->next;

        }
       if(mid==INT_MAX)return {-1,-1};
        return {mid,m-mi};
        
    }
};
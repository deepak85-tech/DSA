/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
       unordered_set<ListNode*>mp;
        ListNode *t1=headA;
        ListNode *t2=headB;
       while(t1!=nullptr)
       {
        mp.insert(t1);
        t1=t1->next;
       }
       while(t2!=nullptr)
       {
        if(mp.count(t2))
        {
            return t2;
        }
        t2=t2->next;
       }
        
        return nullptr;

    }
};
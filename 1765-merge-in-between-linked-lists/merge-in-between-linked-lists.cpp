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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode *t1=list1;
        ListNode *t2=list2;
        while(t2->next!=nullptr)
        {
            t2=t2->next;
        }
        int f=a,s=b;
        ListNode *ff=nullptr;
        ListNode *ss=nullptr;
        while(t1!=nullptr)
        {
            if(f==1){
                ff=t1;
            }
            if(s==0)
            {
                ss=t1->next;
                break;
            }    
            f--;
            s--;
            t1=t1->next;
        }
        ff->next=list2;
        t2->next=ss;
        return list1;


        
    }
};
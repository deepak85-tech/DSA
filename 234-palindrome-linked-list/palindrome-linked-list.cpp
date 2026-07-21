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
    bool isPalindrome(ListNode* head) {
        vector<int>a;
        int n=0;
        ListNode *t=head;
        while(t!=nullptr)
        {
            a.push_back(t->val);
            t=t->next;
            n++;
        }
        reverse(a.begin(),a.end());
        ListNode *te=head;
        int i=0;
        while(te!=nullptr)
        {
            if(te->val != a[i]) return false;
            i++;
            te=te->next;
        }
        return true;
        
    }
};
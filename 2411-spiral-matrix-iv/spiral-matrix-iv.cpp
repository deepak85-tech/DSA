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
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>>ans(m,vector<int>(n,-1));
        int t=0,b=m-1,r=n-1,l=0;
        ListNode*temp=head;
        while(t<=b && l<=r && temp!=nullptr)
        {
            for(int i=l;i<=r&&temp;i++)
            {
               
                ans[t][i]=temp->val;
                temp=temp->next;
                   
                
            }
            t++;
            for(int i=t;i<=b&&temp;i++)
            {
            
                ans[i][r]=temp->val;
                temp=temp->next;
               
            }
            r--;
            if(t<=b)
            {
                for(int i=r;i>=l&&temp;i--)
                {
                    
                    ans[b][i]=temp->val;
                    temp=temp->next;
                   
                }
            }
            b--;
            
            if(l<=r)
            {
                for(int i=b;i>=t&&temp;i--)
                {
                    
                    ans[i][l]=temp->val;
                    temp=temp->next;
                   
                }
            }
            l++;


        }
        return ans;        
        
    }
};
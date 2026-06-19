class Solution {
public:
    int maxOperations(vector<int>& nums) {
        int n=nums.size();
        int prev=nums[0]+nums[1];
        int c=1;
        for(int i=2;i<n-1;i=i+2)
        {
            int t=nums[i]+nums[i+1];
            if(t==prev)
            {
                c++;
                t=0;
            }
            else{
                break;
            }
        }
        return c;
    }
};
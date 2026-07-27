class Solution {
public:
    int fun1(vector<int>&nums,int g)
    {
        if(g<0) return 0;
        int n=nums.size();
        int r=0,l=0,c=0,s=0;
        while(r<n)
        {
            s=s+nums[r];
            while(s>g)
            {
                s=s-nums[l];
                l++;
            }
            c=c+(r-l)+1;

            r++;

        }
        return c;
    }

    int numSubarraysWithSum(vector<int>& nums, int goal) {
       return fun1(nums,goal)-fun1(nums,goal-1);


        
    }
};
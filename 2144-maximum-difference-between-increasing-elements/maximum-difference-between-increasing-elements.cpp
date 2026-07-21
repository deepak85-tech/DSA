class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int n=nums.size(),mi=nums[0],md=-1;
       
        for(int i=1;i<n;i++)
        {
           if(nums[i]>mi)
           {
            md=max(md,nums[i]-mi);
           }
           else
           {
            mi=nums[i];
           }
          
           
        }
        return md;
    }
};
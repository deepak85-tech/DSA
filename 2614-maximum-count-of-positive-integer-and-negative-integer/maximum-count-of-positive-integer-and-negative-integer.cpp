class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n=nums.size(),c=0,cc=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]>0)
                c++;
            else if(nums[i]<0)
                cc++;
        }
        return max(c,cc);
    }
};
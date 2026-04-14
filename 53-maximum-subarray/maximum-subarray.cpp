class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int m=INT_MIN,c=0;
        int l=nums.size();
        for(int i=0;i<l;i++)
        {
            c+=nums[i];
            m=max(c,m);
            if(c<0)
            {
                c=0;
            }
        }
        return m;
        
    }
};
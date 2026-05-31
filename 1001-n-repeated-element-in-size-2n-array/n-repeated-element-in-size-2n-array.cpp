class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n=nums.size(),r;
        vector<int>ans(10001,0);
        for(int i=0;i<n;i++)
        {
            ans[nums[i]]++;
            
        }
        for(int i=0;i<n;i++)
        {
            if(ans[nums[i]]>=2)
                return nums[i];
        }
        return -1;

    }
};
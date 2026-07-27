class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size(),m=INT_MIN;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int s=(nums[i]-1)*(nums[j]-1);
                m=max(m,s);

            }
        }
        return m;
    }
};
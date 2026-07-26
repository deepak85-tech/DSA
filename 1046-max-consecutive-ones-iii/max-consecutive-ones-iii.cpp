class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int i=0,j=0,z=0,m=0;
        while(j<n)
        {
            if(nums[j]==0) z++;
            if(z>k) 
            {
                if(nums[i]==0) z--;
                i++;
            }
            if(z<=k) 
            {
                int l=j-i+1;
                m=max(m,l);
            }
            j++;
        }
        return m;
    }
};
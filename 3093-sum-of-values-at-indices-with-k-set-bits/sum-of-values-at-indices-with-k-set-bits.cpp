class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int s=0,c=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            int r=i;
            while(r>0)
            {
                int t=r&1;
                if(t==1) c++;
                r=r>>1;
            }
            
            if(c==k) s=s+nums[i];
            c=0;
        }
        return s;
        
    }
};
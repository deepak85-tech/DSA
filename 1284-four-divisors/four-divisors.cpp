class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int n=nums.size();
        int t=0;
        for(int i=0;i<n;i++)
        {
            long long c=0,s=0;
            for(int j=1;j<=nums[i];j++)
            {
                if(nums[i]%j==0)
                {
                    c++;
                    s=s+j;
                }

                if(c>4)
                    break;
            }
            if(c==4)
            {
                t=t+s;
            }
        }
        return t;
        
    }
};
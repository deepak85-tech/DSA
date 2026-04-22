class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size(),z=0,o=0,t=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)
            {
                z++;
            }
            else if(nums[i]==1)
            {
                o++;
            }
            else
            {
                t++;
            }
        }
        int in=0;
        for(int i=0;i<z;i++)
        {
            nums[in++]=0;
        }
        for(int i=0;i<o;i++)
        {
            nums[in++]=1;
        }
        for(int i=0;i<t;i++)
        {
            nums[in++]=2;
        }


        
    }
};
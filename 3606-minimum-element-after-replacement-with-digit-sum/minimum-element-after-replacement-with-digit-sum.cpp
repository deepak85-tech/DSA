class Solution {
public:
    int minElement(vector<int>& nums) {
        int n=nums.size(),s=0;
        for(int i=0;i<n;i++)
        {
            s=0;
            while(nums[i]>0)
            {
                s=s+(nums[i]%10);
                nums[i]=nums[i]/10;
            }
            nums[i]=s;
        }
        sort(nums.begin(),nums.end());
        return nums[0];
    }
};
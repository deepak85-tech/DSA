class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int f=0;
        if(n<2){
            return 0;
        }
        else
        {
            for(int i=0;i<n-1;i++)
            {
                f=max(f,nums[i+1]-nums[i]);

            }
            return f;
        }
    }
};
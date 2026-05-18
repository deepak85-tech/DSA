class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) { 
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()&&k>0;i++) {
            if(nums[i]<0) {
                nums[i]=-nums[i];
                k--;
            }
        }

        int s=0;
        int mn=INT_MAX;

        for(int x:nums) {
            s+=x;
            mn=min(mn, x);
        }
        if(k%2==1) {
            s=s-2*mn;
        }

        return s;
    }
};
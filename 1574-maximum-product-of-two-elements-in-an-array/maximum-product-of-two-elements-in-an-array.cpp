class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size(),m;
        sort(nums.begin(),nums.end());
        m=(nums[n-1]-1)*(nums[n-2]-1);
        return m;
        
    }
};
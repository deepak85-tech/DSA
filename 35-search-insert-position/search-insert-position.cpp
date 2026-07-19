class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        int i=0,j=n-1;
        while(i<=j)
        {
            int m=(i+j)/2;
            if(nums[m]==target){ return m;
            }
            else if(nums[m]<target) i=m+1;
            else j=m-1;
        }
        return i;        
    }
};
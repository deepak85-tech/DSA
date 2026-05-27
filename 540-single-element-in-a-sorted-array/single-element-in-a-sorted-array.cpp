class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        int i=0,j=n-1,a;
        while(i<=j)
        {
            int m=(i+j)/2;
            if((m==0||nums[m]!=nums[m-1]) && 
               (m==n-1||nums[m]!=nums[m+1])) {
                return nums[m];
            }

            if((m%2==0&&nums[m]==nums[m+1])||
               (m%2==1&&nums[m]==nums[m-1])) {
                i=m+1;
            }
            else {
                j=m-1;
            }
        }
        return -1;
    }
};
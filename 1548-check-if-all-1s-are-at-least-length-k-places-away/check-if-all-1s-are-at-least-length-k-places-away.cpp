class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int p=-1,n=nums.size();

        for(int i=0;i<n;i++) {
            if(nums[i]==1) {
                if(p!=-1&&i-p-1<k)
                    return false;

                p=i;
            }
        }

        return true;
        
    }
};
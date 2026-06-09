class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<int> v;
        for (int i=0;i<n;i++) {
            if (i==0||nums[i]!=nums[i-1])
                v.push_back(nums[i]);
        }
        int nn=v.size();
        if (nn<3)
            return v[nn-1];
        return v[nn-3];
        
    }
};
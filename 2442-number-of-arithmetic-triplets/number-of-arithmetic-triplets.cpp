class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int n=nums.size();
        int c=0;
        unordered_set<int>aa(nums.begin(),nums.end());
        for(auto &i:nums)
        {
            if(aa.count(i+diff)&&aa.count(i+2*diff))
            {
                c++;
            }
        }
        return c;
        
    }
};
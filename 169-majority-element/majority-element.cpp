class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int t=(n/2)+1;
        unordered_map<int,int>m;
        for(auto &i:nums)
        {
            m[i]++;
        }
        for(auto &i:m)
        {
            if(i.second>=t)
            {
                return i.first;
            }
        }
        return -1;
        
    }
};
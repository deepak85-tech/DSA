class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int>m;
        int n=nums.size();
        int c=0;
        for(auto &i:nums)
        {
            m[i]++;
        }
        for(auto &i:m)
        {
            int a=i.second;
            if(a>1){
                int ans=(a*(a-1))/2;
                c=c+ans;
            }
        }
        return c;
    }
};
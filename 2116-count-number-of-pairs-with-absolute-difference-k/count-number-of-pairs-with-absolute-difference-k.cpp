struct hash_pair {
    size_t operator()(const pair<int,int>& p) const {
        return hash<int>()(p.first) ^ (hash<int>()(p.second) << 1);
    }
};

class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        unordered_map<pair<int,int>,int,hash_pair>mp;
        int n=nums.size(),c=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(i!=j) mp[{nums[i],nums[j]}]++;
            }

        }
        for(auto &i:mp)
        {
            int t=abs((i.first.first)-(i.first.second));
            if(t==k) c=c+i.second;
        }
        return c;
        
    }
};
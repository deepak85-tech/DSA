class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int,int> m;

        for(int x:nums)
            m[x]++;

        vector<pair<int,int>> v;

        for(auto x:m)
            v.push_back({x.second,x.first});

        sort(v.begin(),v.end());

        vector<int> ans;

        int n=v.size();

        for(int i=n-1;i>=n-k;i--)
            ans.push_back(v[i].second);

        return ans;
    }
};
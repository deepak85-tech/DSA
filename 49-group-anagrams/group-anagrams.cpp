class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mp;
        for(string w:strs)
        {
            string k=w;
            sort(k.begin(),k.end());
            mp[k].push_back(w);
        }
        vector<vector<string>>ans;
        for(auto &i:mp)
        {
            ans.push_back(i.second);
        }
        return ans;
    }
};
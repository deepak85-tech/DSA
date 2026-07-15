class Solution {
public:
    bool isSubstringPresent(string s) {
        string ss=s;
        reverse(ss.begin(),ss.end());
        unordered_map<string,int>m;
        unordered_map<string,int>mm;
        int n=s.size();
        for(int i=0;i<n-1;i++)
        {
            string t = s.substr(i, 2);
            m[t]++;
        }
        for(int i=0;i<n-1;i++)
        {
            string t = ss.substr(i, 2);
            mm[t]++;
        }
        for(auto &i:m)
        {
            if(mm.find(i.first)!=mm.end())
                return true;
        }
        return false;
        
    }

};
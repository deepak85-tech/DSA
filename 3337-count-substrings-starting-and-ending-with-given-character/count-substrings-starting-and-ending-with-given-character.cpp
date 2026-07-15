class Solution {
public:
    long long countSubstrings(string s, char c) {
        int n=s.size();
        long long cc=0;
        bool b=false;
        unordered_map<char,int>m;
        for(auto &i:s)
        {
            m[i]++;
        }
        if(m.find(c)!=m.end())
        {
            cc=m[c];
               
        }
        
        return cc*(cc+1)/2;
    }
};
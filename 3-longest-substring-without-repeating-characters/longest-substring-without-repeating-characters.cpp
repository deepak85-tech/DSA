class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>a;
        int n=s.size();
        int l=0,r=0,m=0;
        while(r<n)
        {
            if(a.find(s[r])!=a.end())
            {
                if(a[s[r]]>=l)
                {
                    l=a[s[r]]+1;
                }
            }
            int le=r-l+1;
            m=max(m,le);
            a[s[r]]=r;
            r++;
        }
        return m;
        
    }
};
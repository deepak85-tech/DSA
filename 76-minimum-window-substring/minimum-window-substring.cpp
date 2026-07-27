class Solution {
public:
    string minWindow(string s, string t) {
        int n=s.size(),m=t.size(),min=INT_MAX;
        unordered_map<char,int>mp;
        for(int i=0;i<m;i++)
        {
            mp[t[i]]++;
        }
        int r=0,l=0,c=0,st=-1;
        while(r<n)
        {
            if(mp[s[r]]>0)
            {
                c++;
                
            }
            mp[s[r]]--;
            while(c==m)
            {
                if((r-l+1)<min)
                {
                    min=r-l+1;
                    st=l;
                    
                }
                mp[s[l]]++;
                if(mp[s[l]]>0)
                {
                   
                    c--;
                }
                l++;
            }
            r++;
        }
        if(st==-1) return"";
        return s.substr(st,min);
        
    }
};
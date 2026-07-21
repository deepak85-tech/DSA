class Solution {
public:
    int balancedStringSplit(string s) {
        int n=s.size(),r=0,c=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='L') r++;
            else r--;
            if(r==0) c++;
        }
        return c;
        
    }
};
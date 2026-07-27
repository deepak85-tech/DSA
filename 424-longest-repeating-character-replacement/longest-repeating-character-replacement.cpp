class Solution {
public:
    int characterReplacement(string s, int k) 
    {
        vector<int>f(26,0);
        int n=s.size();
        int i=0,j=0,m=0,mf=0;
        while(j<n)
        {
           f[s[j]-'A']++;
           mf=max(mf,f[s[j]-'A']);
           while((j-i+1)-mf>k)
           {
            f[s[i]-'A']--;
            i++;
           }
           m=max(m,(j-i)+1);
           j++;
        }
        return m;
        
        
    }
};
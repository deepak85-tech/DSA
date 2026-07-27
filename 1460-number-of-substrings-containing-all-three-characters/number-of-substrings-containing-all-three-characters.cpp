class Solution {
public:
    int numberOfSubstrings(string s) {
        int n=s.size(),c=0;
        int a[3]={-1,-1,-1};
        for(int i=0;i<n;i++)
        {
            a[s[i]-'a']=i;
            if(a[0]!=-1&&a[1]!=-1&&a[2]!=-1)
            {
                c=c+(1+min(min(a[0],a[1]),a[2]));
            }
        }
        return c;
        
    }
};
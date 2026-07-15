class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int n=sentences.size();
        int m=INT_MIN;
        int c=0;
        for(int i=0;i<n;i++)
        {
            c=0;
            int t=sentences[i].size();
            string z=sentences[i];
            for(int j=0;j<t;j++)
            {
                if(z[j]==' '){
                    c++;
                }
            }
            if(c>m) m=c;
        }
        return m+1;
    }
};
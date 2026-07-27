class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();
        int s=0;
        for(int i=0;i<k;i++)
        {
            s=s+cardPoints[i];
        }
        int ls=s,m=s,rs=0;
        int z=n-1;
        for(int i=k-1;i>=0;i--)
        {
            ls=ls-cardPoints[i];
            rs=rs+cardPoints[z];
            z--;
            m=max(m,ls+rs);
        }
        return m;
        
    }
};
class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();
        int t=0;
        for(int i=0;i<n;i++)
        {
            t=t+cardPoints[i];
        }
        if(n==k) return t;
        int s=0;
        int ans=n-k;
        for(int i=0;i<ans;i++)
        {
            s=s+cardPoints[i];
        }
        int z=0,res=t-s;
        for(int i=ans;i<n;i++)
        {
           
            s=s+cardPoints[i]-cardPoints[i-ans];
            res=max(res,t-s);
        
            
            
        }
        return res;

        
    }
};
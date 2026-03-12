class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int m=0,mm=prices[0];
        int n=prices.size();
        for(int i=1;i<n;i++)
        {
            if(prices[i]>mm)
            {
                m=max(m,prices[i]-mm);
            }
            mm=min(mm,prices[i]);
        }
        return m;
    
            
        
    }
};
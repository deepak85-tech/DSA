class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int n=costs.size();
        sort(costs.begin(),costs.end());
        int s=0,c=0;
        for(int i=0;i<n;i++)
        {
            if(costs[i]<coins){
                s=s+costs[i];
                if(s<=coins)
                    c++;
            }
            if(s>=coins)
              break;
            
        }
        return c;
        
    }
};
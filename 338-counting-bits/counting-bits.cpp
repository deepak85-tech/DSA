class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ans;
        int c=0;
        for(int i=0;i<=n;i++)
        {
            int z=i;
            while(z>0)
            {
                int t=z&1;
                if(t==1) c++;
                z=z>>1;
            }
            ans.push_back(c);
            c=0;
        }
        return ans;
        
    }
};
class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int n=grid.size();
        int nn=grid[0].size();
        vector<int>orr(n,0);
        vector<int>oc(nn,0);
        vector<vector<int>>ans(n,vector<int>(nn, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<nn;j++)
            {
                if(grid[i][j]==1)
                {
                    orr[i]++;
                    oc[j]++;
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<nn;j++)
            {
                int rz=n-orr[i];
                int cz=nn-oc[j];
                int res=orr[i]+oc[j]-rz-cz;
                ans[i][j]=res;
            }
            
        }
        return ans;
        
    }
};
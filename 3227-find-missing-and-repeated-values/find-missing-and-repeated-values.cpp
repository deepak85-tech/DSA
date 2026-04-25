class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int e=0,es=0;
        int a,b;
        int n=grid.size();
        unordered_set<int> s;
        vector<int> ar;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                es=es+grid[i][j];

                if(s.find(grid[i][j])!=s.end())
                {
                    a=grid[i][j];
                    ar.push_back(a);
                }
                s.insert(grid[i][j]);

            }
        }
        e=(n*n)*(n*n+1)/2;
        b=e+a-es;
        ar.push_back(b);
        return ar;



        
    }
};
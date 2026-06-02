class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int n=dimensions.size();
        int m=dimensions[0].size();
        double mi=0,g=0;
        int h;
        vector<int>a;
        for(int i=0;i<n;i++)
        {
            int v=(dimensions[i][0]*dimensions[i][0])+(dimensions[i][1]*dimensions[i][1]);
            double t=sqrt(v);
            if(t>mi)
            {
                mi=t;
                h=i;
            }
            else if(t==mi)
            {
                int z=dimensions[i][0]*dimensions[i][1];
                int zz=dimensions[h][0]*dimensions[h][1];
                if(z>zz)
                    h=i;
            }
        }
       int res=dimensions[h][0]*dimensions[h][1];
       return res;
        
    }
};
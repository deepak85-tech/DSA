class Solution {
public:
    bool capacity(vector<int>weight,int capa,int days)
    {
        int da=1;
        int l=0;
        for(int i:weight)
        {
            if(i>capa) return false;
            if(l+i<=capa) l=l+i;
            else
            {
                da++;
                l=i;
            }

        }
        return da<=days; 
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int n=weights.size(),maxi=INT_MIN,ele=0;
        for(int i=0;i<n;i++)
        {
            maxi=max(maxi,weights[i]);
            ele=ele+weights[i];
        }
        int i=maxi;
        int j=ele;
        int an=j;
        while(i<=j)
        {
            int m=(i+j)/2;
            if(capacity(weights,m,days))
            {
                an=m;

                j=m-1;
                
            }
            else
            {
                i=m+1;
            }
        }
        return an;
    }
};
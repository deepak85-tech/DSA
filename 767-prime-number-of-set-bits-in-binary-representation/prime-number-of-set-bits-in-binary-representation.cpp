class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        int c=0,m=0;
        for(int i=left;i<=right;i++)
        {
            int res=i;
            while(res>0)
            {
                int t=res&1;
                if(t==1)c++;
                res=res>>1;
            }
            if(c==2||c==3||c==5||c==7||c==11||c==13||c==17||c==19) {
                m++;
            }
            c=0;
        }
        return m;
    }
};
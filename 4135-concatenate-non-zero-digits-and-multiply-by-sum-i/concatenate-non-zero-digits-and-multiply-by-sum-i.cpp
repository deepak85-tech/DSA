class Solution {
public:
    long long sumAndMultiply(int n) {
        long long s=0,m=1,x=0;
        while(n>0)
        {
            int t=n%10;
            if(t>0){
                 s+=t;
                 x=x+(t*m);
                 m=m*10;
            }
            n=n/10;
        }
        return x*s;
    }
};
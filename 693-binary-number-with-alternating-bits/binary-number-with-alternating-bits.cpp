class Solution {
public:
    bool hasAlternatingBits(int n) {
     
        int tt=n&1;
        int c=tt;
        n=n>>1;
        while(n>0)
        {
            int t=n&1;
            if(c==t)  return false;
            else c=t;
            n=n>>1;
            
        }
        return true;
    }
};
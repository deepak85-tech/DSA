class Solution {
public:
    int maxProduct(int n) {
     
        int m=-1;
        int mm=-1;
        while(n>0)
        {
            int t=n%10;
              if (t>m) {
                mm=m;
                m=t;
            }
            else if(t>mm) {
                mm=t;
            }
            n=n/10;
        }
        return m*mm;
    }
};
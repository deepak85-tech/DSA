class Solution {
public:
    int maxProduct(vector<int>& nums) {
       int f=0,s=0;
       for(int n:nums)
       {
        if(n>f)
        {
            s=f;
            f=n;
        }
        else if(n>s)s=n;
       }
       return (f-1)*(s-1);
    }
};
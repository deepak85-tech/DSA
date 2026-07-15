class Solution {
public:
    int maxDigitRange(vector<int>& nums) {
        int n=nums.size(),f=INT_MIN,s=0;
        for(int i=0;i<n;i++)
        {
            int ma=INT_MIN,mi=INT_MAX;
            int z=nums[i];
             while(z>0)
            {
                int t=z%10;
                mi=min(mi,t);
                ma=max(ma,t);
                z=z/10;
            }
            int diff=ma-mi;
            if(diff>f){
                 f=diff;
                 s=nums[i];
            }
            else if(diff==f){
                s=s+nums[i];
            }
            

        }
        return s;
    }
};
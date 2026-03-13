class Solution {
public:
    int maxArea(vector<int>& height) {
        int s=height.size();
        int m=0,n=s-1,ans=0;
        while(m<n)
        {
            int mm=n-m;
            int mi=min(height[m],height[n]);
            int a=mi*mm;
            ans=max(a,ans);
            if(height[m]<height[n])
            {
                m++;
            }
            else
            {
                n--;
            }
        }
        return ans;
        
    }
};
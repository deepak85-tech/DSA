class Solution {
public:
    int fun1(vector<int>&a,int k)
    {
        if(k<0)return 0;
        int n=a.size();
        int l=0,res=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]%2!=0)
            k--;
        
        
        while(k<0)
        {
            if(a[l]%2!=0) k++;
            l++;
            
        }
        res=res+(i-l+1);
        }
        return res;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        return fun1(nums,k)-fun1(nums,k-1);
       
        
    }
};
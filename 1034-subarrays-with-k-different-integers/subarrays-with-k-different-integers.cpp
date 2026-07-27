class Solution {
public:
    int fun1(vector<int>&a,int k)
    {
        if(k<=0) return 0;
        unordered_map<int,int>mp;
        int l=0,r=0,m=0;
        int n=a.size();
        while(r<n)
        {
            mp[a[r]]++;
            while(mp.size()>k)
            {
                mp[a[l]]--;
                if(mp[a[l]]==0){
                    mp.erase(a[l]);
                }
                l++;
            }
            m=m+(r-l)+1;
            r++;
            
        }
        return m;
    }

    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return fun1(nums,k)-fun1(nums,k-1);

        
    }
};
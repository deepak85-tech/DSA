class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int>a;
        int p=0,c=0;
        a[0]=1;
        for(int i=0;i<n;i++)
        {
            p=p+nums[i];
            int r=p-k;
            c=c+a[r];
            a[p]=a[p]+1;
        }
        return c;

    }
};
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n=nums.size();
        vector<int>fre(n+1,0);
        vector<int>a;
        for(int i=0;i<n;i++)
        {
            fre[nums[i]]++;
        }
        for(int i=1;i<=n;i++)
        {
            if(fre[i]>=2)
                a.push_back(i);
        }
        return a;
        
    }
};
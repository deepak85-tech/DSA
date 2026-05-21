class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
         int n=nums.size();
        vector<int>f(n+1,0);
        vector<int> a;

        for (int i=0;i<n;i++) {
            f[nums[i]]++;
        }

        for (int i=1;i<=n;i++) {
            if (f[i]==0) {
                a.push_back(i);
            }
        }

        return a;
        
    }
};
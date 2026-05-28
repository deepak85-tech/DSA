class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
        int i=0,j=n-1;
        sort(nums.begin(),nums.end());
        vector<int>r;
        for(int i=0;i<n;i++) {
            if(nums[i]==nums[i+1]) {
                r.push_back(nums[i]);
                break;
            }
        }

        for(int i=1;i<=n;i++) {
            bool found=false;

            for(int j=0;j<n;j++) {
                if(nums[j]==i) {
                    found=true;
                    break;
                }
            }

            if(found==false) {
                r.push_back(i);
                break;
            }
        }
        return r;
    }
};
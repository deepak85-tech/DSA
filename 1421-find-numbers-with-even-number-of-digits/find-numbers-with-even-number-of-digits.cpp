class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int c=0;
        for(int i=0;i<nums.size();i++) {
            int d=to_string(nums[i]).size();
            if(d%2==0) {
                c++;
            }
        }

        return c;
        
    }
};
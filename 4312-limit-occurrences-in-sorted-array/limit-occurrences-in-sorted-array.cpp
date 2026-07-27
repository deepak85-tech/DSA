class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>a;
        int current=nums[0],ans=k;
        int j=0;
        while(j<n)
        {
            if(nums[j]==current)
            {
                ans--;
            }
            else{
                ans=k;
                ans--;
            }
            current=nums[j];
            if(ans>=0)
            {
                a.push_back(nums[j]);
            }
            j++;

        }
        return a;
        
    }
};
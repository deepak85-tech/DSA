class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int s=-1,e=-1;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==target) 
            {
                if(s==-1)
                    s=i;
                e=i;
                
            }
        
        }
        return{s,e};
    }
};
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int s=-1,e=-1;
        int i=0,j=n-1;
        while(i<=j)
        {
            int m=(i+j)/2;
           if(nums[m]>=target) j=m-1;
           else i=m+1;
            
        }
        if(i<n && nums[i]==target) s=i;
        else return{-1,-1};
        int l=0,h=n-1;
        while(l<=h)
        {
            int m=(h+l)/2;
            if(nums[m]<=target) l=m+1;
            else h=m-1;
        }
        e=h;
        return{s,e};
    }
};
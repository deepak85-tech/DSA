class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size();
        int r=n-1,l=0;
        while(l<r)
        {
            int m=numbers[r]+numbers[l];
            if(m==target)
            {
                return {l+1,r+1};
            }
            else if(m<target)
            {
                l++;
            }
            else
            {
                r--;
            }
        }
        return{};
    }
};
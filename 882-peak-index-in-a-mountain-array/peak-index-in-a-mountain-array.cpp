class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int p;
        for(int i=1;i<arr.size()-1;i++)
        {
            if(arr[i]>arr[i-1] && arr[i]>arr[i+1])
            {
                p=i;
            }
        }
        return p;
    }
};
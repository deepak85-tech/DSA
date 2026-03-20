class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int i=0,j=arr.size();
        int m=i+(j-i)/2;
        while(i<j)
        {
            if(arr[m]<arr[m+1])
            {
                i=m+1;
            }
            else
            {
                j=m;
            }
            m=i+(j-i)/2;
        }
        return i;
    }
};
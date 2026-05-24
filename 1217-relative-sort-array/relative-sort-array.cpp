class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        int n=arr1.size();
        int nn=arr2.size();
        vector<int>re;
        for(int i=0;i<nn;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(arr2[i]==arr1[j])
                {
                    re.push_back(arr1[j]);
                    arr1[j]=-1;
                }
            }
        }
        sort(arr1.begin(),arr1.end());
        for(int i=0;i<n;i++)
        {
            if(arr1[i]!=-1)
            {
                re.push_back(arr1[i]);
            }
        }
        return re;
        
    }
};
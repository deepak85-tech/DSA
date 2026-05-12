class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        vector<pair<double,pair<int,int>>> re;
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                double m=(double)arr[i]/arr[j];
                re.push_back({m,{arr[i],arr[j]}});

            }
        }
       
        sort(re.begin(),re.end());
        return {{re[k-1].second.first},{re[k-1].second.second}};

    }
};
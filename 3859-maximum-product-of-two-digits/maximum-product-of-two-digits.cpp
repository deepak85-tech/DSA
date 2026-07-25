class Solution {
public:
    int maxProduct(int n) {
        int p=1;
        int m=INT_MIN;
        vector<int>a;
        while(n>0)
        {
            int t=n%10;
            a.push_back(t);
            n=n/10;
        }
        sort(a.begin(),a.end());
        int nn=a.size();
        int d=a[nn-2]*a[nn-1];
        return d;
    }
};
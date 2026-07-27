class Solution {
public:
    int getLeastFrequentDigit(int n) {
        unordered_map<int,int>a;
        int ans=n;
        while(n>0)
        {
            int t=n%10;
            a[t]++;
            n=n/10;
        }
        int m=INT_MAX,mm=INT_MAX;
        for(auto &i:a)
        {
            if(i.second<m)
            {
                m=i.second;
                mm=i.first;
            }
            else if(i.second==m &&i.first<mm)
            {
                mm=i.first;
            }
        }
        return mm;
        
    }
};
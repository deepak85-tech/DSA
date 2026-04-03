class Solution {
public:
    int maximumSwap(int num) {
        int c=0;
        vector<int>a;
        while(num>0)
        {
            a.push_back(num%10);
            num=num/10;
        }
        reverse(a.begin(),a.end());
        int na=a.size();
        for(int i=0;i<na;i++)
        {
            int e=i;
            for(int j=i+1;j<na;j++)
            {
                if(a[j]>=a[e])
                {
                    e=j;
                }

            }   
            if(a[i]!=a[e])
            {
                swap(a[i],a[e]);
                break;
            }
        }
        int r=0;
        for(int i=0;i<na;i++)
        {
            r=r*10+a[i];
        }
        return r;
    }
};
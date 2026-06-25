class Solution {
public:
    int maximum69Number (int num) {
        int n=num;
        vector<int>a;
        while(n>0)
        {
            int t=n%10;
            n=n/10;
            a.push_back(t);
        }
        reverse(a.begin(),a.end());
        int nn=a.size(),r=0;
        for(int i=0;i<nn;i++)
        {
            if(a[i]==6)
            {
                a[i]=9;
                break;
            }
           
        }
        for(int i=0;i<nn;i++)
            r=r*10+a[i];
        return r;
    }
};
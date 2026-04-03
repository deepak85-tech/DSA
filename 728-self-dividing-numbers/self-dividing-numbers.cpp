class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        int n=0,r;
        vector<int>a;
        for(int i=left;i<=right;i++)
        {
            n=i;
            int c=0;
            while(n>0)
            {
                r=n%10;
                if(r==0 || i%r!=0)
                {
                    c=1;
                    break;
                }
                n=n/10;
            }
            if(c==0)
            {
                a.push_back(i);
            }
            
        }
        return a;
        
    }
};
class Solution {
public:
    int fun(int n)
    {
        int w=n,m=INT_MIN;
        while(n>0)
        {
            int t=n%10;
            m=max(m,t);
            n=n/10;
        }
        string s=to_string(w);
        int size=s.size();
        for(int i=0;i<size;i++)
        {
            s[i]=m+'0';
        }
        int res=stoi(s);
         return res;
    }
    int sumOfEncryptedInt(vector<int>& nums) {
        int n=nums.size(),fr=0;
        for(int i=0;i<n;i++)
        {
            int frt=fun(nums[i]);
            fr=fr+frt;
        }
        return fr;
    }
};
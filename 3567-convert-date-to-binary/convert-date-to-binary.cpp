class Solution {
public:
    string convertDateToBinary(string date) {
        string y,m,d;
        for(int i=0;i<4;i++) y=y+date[i];
        m=m+date[5];
        m=m+date[6];
        d=d+date[8];
        d=d+date[9];
        int yy=stoi(y);
        int mm=stoi(m);
        int dd=stoi(d);
        string res;
        while(yy>0)
        {
            int t=yy&1;
            res=res+to_string(t);
            yy=yy>>1;
        }
         reverse(res.begin(),res.end());
        res=res+"-";
        int n=res.size();
        while(mm>0)
        {
            int t=mm&1;
            res=res+to_string(t);
            mm=mm>>1;
        }
         reverse(res.begin()+n,res.end());
        res=res+"-";
        int nn=res.size();
        while(dd>0)
        {
            int t=dd&1;
            res=res+to_string(t);
            dd=dd>>1;
        }
         reverse(res.begin()+nn,res.end());
       
       
        return res;
        
    }
};
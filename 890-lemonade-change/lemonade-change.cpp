class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int c=0,cc=0;
        int n=bills.size();
        for(int i=0;i<n;i++) {
            if(bills[i]==5) {
                c++;
            }
            else if(bills[i]==10) {
                if(c==0)
                    return false;
                c--;
                cc++;
            }
            else {
                if(cc>0 && c>0) {
                    cc--;
                    c--;
                }
                else if(c>=3) {
                    c-=3;
                }
                else {
                    return false;
                }
            }
        }

        return true;
    }
};
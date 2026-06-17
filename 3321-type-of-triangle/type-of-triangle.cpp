class Solution {
public:
    string triangleType(vector<int>& a) {
        bool tf=false;
        if((a[0]+a[1]>a[2])&&(a[0]+a[2]>a[1])&&(a[1]+a[2]>a[0]))
        {
            tf=true;
        } 
        if(tf)
        {
            if((a[0]==a[1])&&(a[1]==a[2]))
                return "equilateral"; 
            else if((a[0]==a[1])||(a[0]==a[2])||(a[1]==a[2]))
                return "isosceles";   
            else
                return "scalene";
        }
        return "none";
        
    }
};
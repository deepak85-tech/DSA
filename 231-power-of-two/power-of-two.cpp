class Solution {
public:
    bool isPowerOfTwo(int n) {
        for(int i=0;i<n;i++)
        {
           if(n > 0 && (n & (n - 1)) == 0)
            {
                return true;
                break;
            }
        }
        return false;
    }
};
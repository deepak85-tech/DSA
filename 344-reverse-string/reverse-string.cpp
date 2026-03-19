class Solution {
public:
    void reverseString(vector<char>& s) {
        int n=0,m=s.size()-1;
        while(n<m)
        {
            swap(s[n],s[m]);
            n++;
            m--;
        }
    }
};
class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        int n=words.size();
        for(int i=0;i<n;i++)
        {
           string a=words[i];
           reverse(a.begin(),a.end());
           if(a==words[i])
            return a;
        }
        return "";
        
    }
};
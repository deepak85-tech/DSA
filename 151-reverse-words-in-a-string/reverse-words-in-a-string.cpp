class Solution {
public:
    string reverseWords(string s) {
        vector<string>res;
        stringstream ss(s);
        string w;
        while(ss>>w)
        {
            res.push_back(w);
        }
        int n=res.size();
        reverse(res.begin(),res.end());
        string result="";
        for(int i=0;i<n;i++)
        {
            result=result+res[i];
            if(i!=n-1) result=result+" ";
        }
        return result;
        
        
    }
};
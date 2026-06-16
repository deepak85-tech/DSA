class Solution {
public:
    string processStr(string s) {
         string ss;
        for(char c:s){
            if(c>='a'&&c<='z')ss+=c;
            else if(c=='*'){
                if(!ss.empty())ss.pop_back();
            }
            else if(c=='#')ss+=ss;
            else reverse(ss.begin(),ss.end());
        }
        return ss;
        
    }
};
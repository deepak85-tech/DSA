class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        vector<string>s;
        for(string &i:words)
        {
            stringstream ss(i);
            string word;
            while(getline(ss,word,separator))
            {
                if(!word.empty())
                {
                    s.push_back(word);
                }
            }
        }
        return s;
    }
};
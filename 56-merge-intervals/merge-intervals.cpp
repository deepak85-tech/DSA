class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=intervals.size();
        vector<vector<int>>an;
        sort(intervals.begin(),intervals.end());
        an.push_back(intervals[0]);
        for(int i=1;i<n;i++)
        {
            if(intervals[i][0]<=an.back()[1])
            {
                an.back()[1]=max(an.back()[1],intervals[i][1]);

            }
            else
            {
                an.push_back(intervals[i]);
            }
        }
        return an;
    }
};
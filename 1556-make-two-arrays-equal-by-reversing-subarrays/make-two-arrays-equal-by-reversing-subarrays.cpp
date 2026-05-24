class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        int n=arr.size();
        bool t=false;
        int nn=target.size();
        sort(arr.begin(),arr.end());
        sort(target.begin(),target.end());
        for(int i=0;i<n;i++)
        {
            t=false;
            if(arr[i]==target[i])
                t=true;
            if(!t)
                break;    
        }
        if(t)
            return true;
        return false;
        
    }
};
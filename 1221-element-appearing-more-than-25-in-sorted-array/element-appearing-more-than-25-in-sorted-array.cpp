class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n=arr.size(),c;
        int ans=n*0.25;
        if(n==1)
        {
            return arr[0];
        }
        for(int i=0;i<n-1;i++)
        {
            if(arr[i]==arr[i+1])
            {
                c++;
                if(c>=ans)
                {
                    return arr[i];
                    break;
                }

            }
            else
            {
                c=0;
            }
        }
        return -1;
        
    }
};
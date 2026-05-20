class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        int w=arr[0],c=0,n=arr.size();
         if(k>=n)
            return *max_element(arr.begin(),arr.end());
        for(int i=1;i<n;i++) {
            if(w>arr[i])
                c++;
            else {
                w=arr[i];
                c=1;
            }

            if(c==k)
                return w;
        }

        return w;
        
    }
};
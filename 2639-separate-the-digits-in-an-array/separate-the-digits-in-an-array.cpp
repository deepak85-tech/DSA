class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {

        vector<int> r;

        for(int num:nums)
        {
            list<int> c;

            while(num>0)
            {
                int d=num % 10;

                c.push_front(d);

                num/=10;
            }

            for(int x : c)
            {
                r.push_back(x);
            }
        }

        return r;
    }
};
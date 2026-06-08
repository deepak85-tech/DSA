class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
                vector<int> s,l,e;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] < pivot)
                s.push_back(nums[i]);
            else if (nums[i] == pivot)
                e.push_back(nums[i]);
            else
                l.push_back(nums[i]);
        }

        s.insert(s.end(), e.begin(), e.end());
        s.insert(s.end(), l.begin(), l.end());
        return s;

    }
};
class Solution {
public:
    int findMaxK(vector<int>& nums) {
        set<int> s(nums.begin(), nums.end());
        int mx = -1;
        for (int& x : nums) {
            if (s.find(-x) != s.end()) {
                mx = max(mx, abs(x));
            }
        }
        return mx;
    }
};

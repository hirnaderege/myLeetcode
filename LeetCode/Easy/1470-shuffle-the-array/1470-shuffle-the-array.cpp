class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> sol = {};
        int x = n;
        for(int i = 0; i < n; i++){
            sol.push_back(nums[i]);
            sol.push_back(nums[x]);
            x += 1;
        }

        return sol;
    }
};
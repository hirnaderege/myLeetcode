class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> sum = nums;

        for(int i = 0; i < nums.size(); i++)
            sum.push_back(nums[i]);

        return sum;
    }
};
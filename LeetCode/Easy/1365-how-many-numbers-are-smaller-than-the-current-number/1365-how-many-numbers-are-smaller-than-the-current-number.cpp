class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int curr = 0;
        int n = nums.size();
        vector<int> smallest(n, 0);

        for(int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                if(nums[i] > nums[j])
                    smallest[i]++;
            }
        }

        return smallest;
    }
};
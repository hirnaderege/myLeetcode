class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int n = nums.size();
        int maxSeq = nums[0];

        for(int i = 1; i < n; i++){
            if(nums[i-1] + 1 != nums[i])
                break;
            maxSeq += nums[i];
        }
        
        sort(nums.begin(), nums.end());
        for(int i = 0; i < n; i++){
            if(maxSeq == nums[i])
                maxSeq++;
        }
        
        return maxSeq;
    }
};
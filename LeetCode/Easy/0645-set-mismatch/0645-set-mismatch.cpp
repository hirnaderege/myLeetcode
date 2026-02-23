class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        vector<int> count(n+1, 0);

        for(int i = 0; i < n; i++){
            count[nums[i]]++;
        }

        int dupe = -1, missing = -1;
        for(int i = 1; i <= n; i++){
            if(count[i] == 2)
                dupe = i;
            if(count[i] == 0)
                missing = i;
        }

        return {dupe, missing};
    }
};
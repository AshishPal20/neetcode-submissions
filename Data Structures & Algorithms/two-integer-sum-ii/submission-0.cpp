class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mpp;

        for(int i = 0; i<nums.size(); i++){
            int complement = target - nums[i];

            if(mpp.count(complement)){
                return {mpp[complement]+1, i+1};
            }

            mpp[nums[i]] = i;
        }

        return {};
    }
};

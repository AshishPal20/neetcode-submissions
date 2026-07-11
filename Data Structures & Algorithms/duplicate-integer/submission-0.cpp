class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int left = 0;
        int right = 1;

        while(right < nums.size()){

            int count = 0;
            if(nums[left] == nums[right]){
                count = 2;
            }
            if(nums[left] != nums[right]){
                left++;
                right++;
            }

            if (count > 1){
                return true;
            }
        }    
        return false;
    }
};
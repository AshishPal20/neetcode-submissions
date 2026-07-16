class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low =0, mid =0, high = nums.size()-1;
        while(mid <= high){
            if(nums[mid] == 0){
                swap(nums[low], nums[mid]);  // for 0
                mid++;
                low++;
            }
            else if(nums[mid] == 1){  // for 1 
                mid++;
            }
            else{
                swap(nums[high], nums[mid]);   // for 2 
                high--;
            }
        }
    }
};
class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.length()-1;

        // skip the non-alphanumeric from left
        while(left < right){
            while(left < right && !isalnum(s[left])){
                left++;
            }

            // skip the non-alphanumeric from right
            while(left<right && !isalnum(s[right])){
                right--;
            }
            if (left < right) {
                if (tolower(s[left]) != tolower(s[right])) {
                    return false;
                }
                left++;
                right--;
            }
        }
        return true;
    }
};

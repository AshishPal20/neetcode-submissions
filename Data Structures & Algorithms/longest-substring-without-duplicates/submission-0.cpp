class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int max_length = 0;
        int left = 0;

        vector<bool> seen(128, false); // Ascii frequency traker 

        for(int right = 0; right < n; right++){
            char current_char = s[right];

            // if the character is already exists -> shrink it from left until duplicate is removed
            while(seen[current_char]){
                seen[s[left]] = false;
                left++;
            }
            // mark the current character as seen 
            seen[current_char] = true;

            int current_window_size = right - left +1;
            max_length = max(max_length, current_window_size);
        }
        return max_length;
    }
};

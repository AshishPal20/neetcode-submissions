class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        int n = s1.size();
        int m = s2.size();

        if (n > m)
            return false;

        vector<int> freq1(26, 0);
        vector<int> window(26, 0);

        // Frequency of s1
        for (char c : s1)
            freq1[c - 'a']++;

        int left = 0;

        for (int right = 0; right < m; right++) {

            window[s2[right] - 'a']++;

            // Keep window size = n
            if (right - left + 1 > n) {
                window[s2[left] - 'a']--;
                left++;
            }

            // Compare frequencies
            if (window == freq1)
                return true;
        }

        return false;
    }
};
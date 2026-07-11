class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;

        // frequency tracker for 26 lowercase letters
        vector<int> count(26, 0);

        for(size_t i = 0; i< s.length(); i++){
            count[s[i] - 'a']++;
            count[t[i] - 'a']--;
        }

        for(int val: count){
            if(val != 0){
                return false;
            }
        }
        return true;
    }
    
};

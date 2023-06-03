class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        int lenS = s.size();
        for (int i = 0; i < lenS; i++) {
            if (s[i] != s[lenS - 1 - i])
                return false;
        }
        return true;
    }
};
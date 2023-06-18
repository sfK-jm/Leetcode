class Solution {
public:
    int lengthOfLastWord(string s) {
        int ret = 0;
        for (int i = s.size() -1; i >= 0; i--){
            if (s[i] != ' ')ret ++;
            else if (ret) return ret;
        }
        return ret;
    }
};
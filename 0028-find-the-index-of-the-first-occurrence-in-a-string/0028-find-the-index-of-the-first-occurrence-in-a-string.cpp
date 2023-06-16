class Solution {
public:
    int strStr(string haystack, string needle) {
        const int len1 = haystack.length();
        const int len2 = needle.length();
        
        for (int i = 0; i < len1 - len2 + 1; i++){
            if(haystack.substr(i, len2) == needle) return i;
        }
        return -1;
    }
};
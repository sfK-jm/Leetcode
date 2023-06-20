class Solution {
public:
    string addBinary(string a, string b) {
        string ret;
        int i = a.length() - 1;
        int j = b.length() - 1;
        int up = 0;
        
        while (i >= 0 || j >= 0 || up){
            if (i >= 0) up += a[i--] - '0';
            if (j >= 0) up += b[j--] - '0';
            ret += up % 2 + '0';
            up /= 2;
        }
        reverse(ret.begin(), ret.end());
        return ret;
    }
};
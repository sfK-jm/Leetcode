class Solution {
public:
    int romanToInt(string s) {
        int ret = 0;
        vector<int> roman(1024);
        
        roman['I'] = 1;
        roman['V'] = 5;
        roman['X'] = 10;
        roman['L'] = 50;
        roman['C'] = 100;
        roman['D'] = 500;
        roman['M'] = 1000;
        for (int i = 0; i + 1 < s.length(); ++i)
        if (roman[s[i]] < roman[s[i + 1]])
            ret -= roman[s[i]];
        else
            ret += roman[s[i]];

        return ret + roman[s.back()];
    }
};
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 1;
        int size = digits.size();
        vector<int> ret;
        
        for (int i = size - 1; i >= 0; i--) {
            int sum = digits[i] + carry;
            
            if (sum == 10) {
                ret.push_back(0);
                carry = 1;
            } else {
                ret.push_back(sum);
                carry = 0;
            }
        }
        if (carry == 1) {
            ret.push_back(1);
        }
        reverse(ret.begin(), ret.end());
        return ret;
    }
};
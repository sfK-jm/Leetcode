class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int ret = 0;
        for(int i : nums){
            if (i != val) nums[ret++] = i;
        }
        return ret;
    }
};
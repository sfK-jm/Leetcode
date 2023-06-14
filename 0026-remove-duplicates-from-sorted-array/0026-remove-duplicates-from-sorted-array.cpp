class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int ret = 1;
        for (int i = 1; i < nums.size(); i++){
            if (nums[i] != nums[i-1]) ret++;
        }
        nums.erase(unique(nums.begin(), nums.end()), nums.end());
        return ret;
    }
};
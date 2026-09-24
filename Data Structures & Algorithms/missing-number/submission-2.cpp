class Solution {
   public:
    int missingNumber(vector<int>& nums) {
        int expected = 0;
        int nums_xor = 0;
        for(int i = 0; i <= nums.size(); i++) {
            expected ^= i;
        }
        for(auto& num : nums) {
            nums_xor ^= num;
        }
        return nums_xor ^ expected;
    }
};

class Solution {
   public:
    int missingNumber(vector<int>& nums) {
        int result = 0;
        for (int i = 0; i < nums.size(); i++) {
            bool missing = true;
            for (auto& num : nums) {
                if (num == i) {
                    missing = false;
                    break;
                } else {
                    result = i;
                }
            }
            if(missing) {
                return result;
            }
        }
    }
};

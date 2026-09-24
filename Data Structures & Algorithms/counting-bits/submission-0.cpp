class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> result;
        for(int i = 0, temp = 0; i <= n; i++) {
            temp = i;
            int count = 0;
            while(temp) {
                count += (temp & 1);
                temp >>= 1;
            }
            result.push_back(count);
        }
        return result;
    }
};

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> result(n+1, 0);
        for(int i = 0; i <= n; i++) {
            int temp = i;
            while(temp) {
                result[i] += (temp & 1);
                temp >>= 1;
            }
        }
        return result;
    };
};

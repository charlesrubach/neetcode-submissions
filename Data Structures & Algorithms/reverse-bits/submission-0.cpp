class Solution {
    const int uint32_t_len = 32 - 1;
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t result = 0;
        for(int i = 0; i <= uint32_t_len; i++) {
            result |= (n & 1) << uint32_t_len - i;
            n >>= 1;
        }
        
        return result;
    }
};

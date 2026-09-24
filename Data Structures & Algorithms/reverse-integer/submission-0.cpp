class Solution {
public:
    int reverse(int x) {
       long int result = 0;
       int temp = x;

       while(x) {
        result *= 10;
        result += (x % 10);
        x /= 10;
       }

        return (result == (int)result) ? result : 0;
    }
};

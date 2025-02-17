class Solution {
public:
    bool prime(int n) {
        return n == 2 || n == 3 || n == 5 || n == 7 || n == 11 || n == 13 || n == 17 || n == 19 || n == 23 || n == 29 || n == 31;
    }
    
    int ans(int n) {
        int bits = 0; 
        while (n > 0) {
           bits++;
           n&=(n-1);
        }
        return bits; 
    }
    
    int countPrimeSetBits(int left, int right) {
        int count = 0; 
        for (int i = left; i <= right; ++i) {
            if (prime(ans(i))) {
                count++;
            }
        }
        return count; 
    }
};
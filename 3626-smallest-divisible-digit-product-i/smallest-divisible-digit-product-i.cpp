class Solution {
public:
    int productOfDigit(int n) {
        int temp = 1;
        while (n > 0) {
            int digit = n % 10;
             n = n / 10 ;
            temp = temp * digit;
        }
        return temp;
    }
    int smallestNumber(int n, int t) {
        //  unit digit find karna hai...
        int temp = n;
        for (int i = n; i < 150; i++) {
            if (productOfDigit(i) % t == 0) {
                return i;
            }
        }
        return 0;
    }
};
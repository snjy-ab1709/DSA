class Solution {
public:
    double myPow(double x, int n) {
        double result=1.0 ;
        long long N = n; 
        if (N < 0) {
            x = 1.0 / x;
            N = -N;
        }

        while (N > 0) {
            if (N % 2 == 1) { 
                result = result * x;
                N = N - 1;
            } else { 
                x = x * x;
                N = N / 2;
            }
        }

        return result;
    }
};
class Solution {
public:
    bool threeFibonacciSum(int n) {
        long long a = 0, b = 1, c = 1; 

        while (a + b + c <= n){
            if (a + b + c == n) 
            return true;

            a = b;  // will move b into a
            b = c;  // will move c into b
            c = a + b;  // and then c will have the sum of a and b after moving
        }
        return false;
    }
};
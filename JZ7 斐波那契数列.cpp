class Solution {
public:
    int Fibonacci(int n) {
        int array[39];
        array[0] = 0;
        array[1] = 1;
        for(int i = 2; i <= n ;i++){
            array[i] = array[i-1] + array [i-2];
        }
        return array[n];
    }
};
class Solution {
public:
    int jumpFloor(int number) {
        if(number == 0 || number == 1 || number == 2){
            return number;
        }
        int a = 1;
        int b = 1;
        int c;
        for(int i = 2; i <= number; i++){
            c = a + b;
            b = a;
            a = c;
        }
        return c;
    }
};
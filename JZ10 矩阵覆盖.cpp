class Solution {
public:
    int rectCover(int number) {
        if(number == 1 || number == 2 || number == 3){
            return number;
        }
        int a = 2;
        int b = 3;
        int c;
        for(int i = 3; i < number; i++){
            c = a + b;
            a = b;
            b = c;
        }
        return c;
    }
};
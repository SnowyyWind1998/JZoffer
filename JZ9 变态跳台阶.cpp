class Solution {
public:
    int jumpFloorII(int number) {
        int way = pow(2, number-1);
        return way;
    }
};
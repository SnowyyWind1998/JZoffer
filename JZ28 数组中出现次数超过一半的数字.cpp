class Solution {
public:
    int MoreThanHalfNum_Solution(vector<int> numbers) {
        int res;
        int i = 0;
        int j = 1;
        int len = numbers.size()/2;
            sort(numbers.begin(), numbers.end());
        if(numbers.size() == 1){
            return numbers[0];
        }
        while(j<numbers.size()){
                if(numbers[i] == numbers[j]){
                    j++;
                }else{
                    i++;
                    j++;
                }
            if(j-i>len){
                return numbers[i];
                break;
            }
        }
        return 0;
    }
};
class Solution {
public:
    vector<int> FindNumbersWithSum(vector<int> array,int sum) {
        int left = 0;
        int right = array.size()-1;
        vector<int> res;
        if(array.size() == 0){
            return res;
        }
        if(array.size() == 1){
            if(array[0] == sum){
                res.push_back(array[0]);
                return res;
            }else{
                return res;
            }
        }
        while(left<right){
            if(array[left]+array[right] == sum){
                res.push_back(array[left]);
                res.push_back(array[right]);
                break;
            }else if(array[left]+array[right] > sum){
                right--;
            }else if(array[left]+array[right] < sum){
                left++;
            }
        }
        return res;
    }
};
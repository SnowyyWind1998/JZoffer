class Solution {
public:
    // Parameters:
    //        numbers:     an array of integers
    //        length:      the length of array numbers
    //        duplication: (Output) the duplicated number in the array number
    // Return value:       true if the input is valid, and there are some duplications in the array number
    //                     otherwise false
    bool duplicate(int numbers[], int length, int* duplication) {
        vector<int> count(length, 0);
        for(int i = 0; i < length; i++){
            int j = numbers[i];
            if(count[j]>0){
                duplication[0] = j;
                return true;
            }else{
                count[j] += 1;
            }
        }
        return false;
    }
};
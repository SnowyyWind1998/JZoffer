class Solution {
public:
    void reOrderArray(vector<int> &array) {
        int size = array.size();
        for(int i=0; i<size; i++){
            if(array[i]%2==0){
                array.push_back(array[i]);
                array.erase(array.begin()+i);
                i--;
                size--;
            }
        }
    }
};
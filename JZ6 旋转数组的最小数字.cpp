class Solution {
public:
    int minNumberInRotateArray(vector<int> rotateArray) {
        int n = rotateArray.size() - 1;
        if(n < 0) return 0;
        
        while(rotateArray[0] == rotateArray[n] && n>0){
            n--;
        }
        if(rotateArray[n]>=rotateArray[0]){ return rotateArray[0]; }
        
        int l = 0, r = n;
        while(l < r){
            int mid = (l + r)/2;
            if(rotateArray[mid]<rotateArray[0]){
                 r = mid; 
            }else{
                l = mid + 1;
            }
        }
        return rotateArray[l];
    }
};
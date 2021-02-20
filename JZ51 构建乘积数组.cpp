class Solution {
public:
    vector<int> multiply(const vector<int>& A) {
        vector<int> B(A);
        vector<int> res;
        if(A.size() == 0 || A.size() == 1) return B;
        
        vector<int> temp(A.size(), 1);
        
        for(unsigned long i = 0; i < B.size(); i++){
            int m = B[i];
            B[i] = temp[i];
            temp[i] = m;
            getNum(A, B, i, res);
            m = B[i];
            B[i] = temp[i];
            temp[i] = m;
        }
        
        return res;
    }
    
    void getNum(const vector<int> &A, vector<int> &B, unsigned long &i, vector<int> &res){
        int k = 1;
        for(unsigned long j = 0; j < B.size(); j++){
            if(j == i){
                continue;
            }
            k *= A[j];
        }
        res.push_back(k);
    }
};
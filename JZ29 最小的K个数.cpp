class Solution {
public:
    vector<int> GetLeastNumbers_Solution(vector<int> input, int k) {
        sort(input.begin(), input.end());
        vector<int> ans;
        if(input.size()<k){
            return ans;
        }
        for(int n = 0; n < k; n++){
            ans.push_back(input[n]);
        }
        return ans;
    }
};
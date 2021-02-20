class Solution {
public:
    static bool cmp(int &x, int &y){
        string s1, s2;
        s1 += to_string(x);
        s1 += to_string(y);
        s2 += to_string(y);
        s2 += to_string(x);
        return s1 < s2;
    }
    string PrintMinNumber(vector<int> numbers) {
        sort(numbers.begin(), numbers.end(), cmp);
        string res;
        for(auto i : numbers){
            res += to_string(i);
        }
        return res;
    }
};
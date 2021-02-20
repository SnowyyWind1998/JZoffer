class Solution {
public:
    vector<string> res;
    string path;
    vector<string> Permutation(string str) {
        
        if(str.size() == 0){
            return res;
        }
        
        sort(str.begin(), str.end());
        path.resize(str.size());
        
        dfs(str, 0, 0, path);
        
        sort(res.begin(), res.end());
        return res;
    }
    
    void dfs(string &str, int start, int idx, string &path){
        if(idx == str.size()){
            res.push_back(path);
            return;
        }
        
        if(idx == 0 || str[idx] != str[idx-1]){
            start = 0;
        }
        
        for(int i = start; i<str.size(); i++){
            if(str[idx] == str[])
                swap(str[i], str[start]);
                dfs(str, start+1, idx, path);
                swap(str[i], str[start]);
            }
        }
    };
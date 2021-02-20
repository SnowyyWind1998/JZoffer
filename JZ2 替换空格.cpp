class Solution {
public:
	void replaceSpace(char *str,int length) {
        string ans;
        string s = str;
        for(char c : s){
            if(c == ' '){ans+="%20";}
            else{ans+=c;}
        }
        strcpy(str, ans.c_str());
	}
};
class Solution {
public:
    int StrToInt(string str) {
        int flag = 1;
        long long num = 0;
        int k = 0;
        
        if(str[k]=='-'){
            flag = -1;
            k++;
        }else if(str[k] =='+'){
            k++;
        }
        
        while(k<str.size()){
            if(str[k]>='0' && str[k]<='9'){
                num = num*10+str[k]-'0';
                k++;
            }else{
                return 0;
            }
        }
        
        return num*flag;
    }
};
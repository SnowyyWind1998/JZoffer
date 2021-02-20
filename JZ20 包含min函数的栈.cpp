class Solution {
public:
    stack<int> stk, min_stk;
    void push(int value) {
        stk.push(value);
        if(min_stk.empty() || min_stk.top()>=value){
            min_stk.push(value);
        }
        
    }
    void pop() {
        if(stk.top() == min_stk.top()){
            min_stk.pop();
        }
        stk.pop();
    }
    int top() {
        return stk.top();
    }
    int min() {
        return min_stk.top();
    }
};
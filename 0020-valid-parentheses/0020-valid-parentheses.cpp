class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        for(char c : s){
            if(!stk.empty() && (c == ')' || c == '}' || c == ']' ) ){
                if (c == ')' && stk.top() == '(') stk.pop();
                else if (c == '}' && stk.top() == '{') stk.pop();
                else if (c == ']' && stk.top() == '[') stk.pop();
                else stk.push(c);
            } else {
                stk.push(c);
            }
        }
        if(stk.empty()) return true;
        else return false;
    }

};
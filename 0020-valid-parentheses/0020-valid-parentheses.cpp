class Solution {
public:
    bool isValid(string s) {
        
        stack <char> stc;
        
        for( int i=0; i<s.length(); i++){
            char ch = s[i];
            
            if( ch == '(' || ch == '[' || ch == '{'){
                stc.push(ch);
            }
            else{
                if( !stc.empty() ){
                    char top = stc.top();
                    if( (ch == ')' && top == '(') || (ch == ']' && top == '[') || (ch == '}' && top == '{')){
                        stc.pop();
                    }
                    else{
                        return false;
                    }
                }
                else{
                    return false;
                }
            }
        }
        if(stc.empty()){
            return true;
        }
        else{
            return false;
        }
    }
};

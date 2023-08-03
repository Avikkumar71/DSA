class Solution {
public:
    char toLowerCase(char ch){
        if( ch>='a' && ch<='z' || ch>='0' && ch<='9' ){
            return ch;
        }
        else{
            char temp = ch - 'A' + 'a';
            return temp;
        }
    }

    bool validcharacter(char ch){
        if( (ch >= 'a' && ch <= 'z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9')){
            return true;
        }
        else{
            return false;
        }
    }

    bool isPalindrome(string s) {
    int i = 0;
    int j = s.size()-1;

    while( i<=j ){

        if( validcharacter(s[i]) == false ){
            i++;
        }

        else if( validcharacter(s[j]) == false ){
            j--;
        }
    
        else if( toLowerCase(s[i]) == toLowerCase(s[j])){
            i++;
            j--;
        }

        else{
            return false;
        }
    }
    return true;
    }
};
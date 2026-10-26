class Solution {
public:
    bool isAlnum(char ch){
        return (ch>='A' && ch<='Z')||
                (ch>='a' && ch<='z')||
                (ch>='0' && ch<='9');
    }

    char toLower(char ch){
        if(ch>='A' && ch<='Z'){
            return ch+32;
        }
        return ch;
    }

    bool isPalindrome(string s) {
        int i = 0;
        int j = s.size()-1;

        while(i<j){
            while(i<j && !isAlnum(s[i])){
                i++;
            }

            while(i<j && !isAlnum(s[j])){
                j--;
            }

            if(toLower(s[i]) != toLower(s[j])){
                return false;
            }
            i++;
            j--;
        }
        return true;

    }
};
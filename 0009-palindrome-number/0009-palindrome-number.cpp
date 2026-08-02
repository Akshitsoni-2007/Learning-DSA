class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        else{
            long long rev_x = 0;
            int og_x = x;

            while(x!=0){
            int last_num = x%10;
            rev_x = (rev_x*10) + last_num;
            x /= 10;
        }

        if (og_x == rev_x) return true;
        else return false;
        }
    }
};
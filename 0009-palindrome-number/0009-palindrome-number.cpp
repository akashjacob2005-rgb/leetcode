class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
         return false;

        int dup=x;
        int rev=0;

        while(x>0){
            int ld = x%10;

            if(rev>INT_MAX/10)
             return false;
            
            rev = rev*10 +ld;
            x=x/10;
        }

        if(dup == rev)
         return true;
        else
         return false;
        
    }
};
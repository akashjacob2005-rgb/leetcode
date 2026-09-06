class Solution {
public:
    bool checkpalindrome(string &s, int left, int right){
        while(left < right){
            if(s[left] != s[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int i =0;
        int j=s.size()-1;

        while(i < j){
            if(s[i] != s[j]){
                return checkpalindrome(s, i+1, j) || checkpalindrome(s, i, j-1);
            }

            i++;
            j--;
        }
        return true;

        
        
    }
};
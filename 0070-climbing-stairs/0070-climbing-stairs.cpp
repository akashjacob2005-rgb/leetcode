class Solution {
public:
    int climbStairs(int n) {
        int prev=1;
        int curr=2;
        if(n==1)
         return 1;
        if(n==2)
         return 2;
        
        for(int i=3; i<=n; i++){
            int temp=curr;
            curr = curr+prev;
            prev = temp;

        }
        return curr;
        
    }
};
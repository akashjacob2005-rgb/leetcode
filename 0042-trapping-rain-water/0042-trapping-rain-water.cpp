class Solution {
public:
    int trap(vector<int>& h) {
        int n=h.size();
        int left=0, lm=0,rm=0,w=0;
        int right=n-1;

        while(left<right){
            if(h[left]<=h[right]){
                if(h[left]>=lm)
                 lm=h[left];
                else
                 w+=lm-h[left];
                left++;
            }
            else{
                if(h[right]>=rm)
                 rm=h[right];
                else
                 w+=rm-h[right];
                right--;
            }
        }
        return w;
    }
};
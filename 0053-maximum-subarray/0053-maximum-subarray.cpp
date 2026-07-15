class Solution {
public:
    int maxSubArray(vector<int>& a) {
        int n=a.size();
        int maxi=INT_MIN;
        int sum=0;

        for(int i=0; i<n; i++){
            sum+=a[i];
            if(sum>maxi){
                maxi=sum;
            }
            if(sum<0){
                sum=0;
            }
        }
        return maxi;
        
    }
};
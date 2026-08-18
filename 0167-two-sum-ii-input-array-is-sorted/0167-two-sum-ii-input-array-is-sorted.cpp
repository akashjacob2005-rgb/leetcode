class Solution {
public:
    vector<int> twoSum(vector<int>& num, int target) {

        int n=num.size();
        int left=0;
        int right =n-1;
        int sum=0;

        while(left<right){
            sum = num[left]+num[right];
            if(sum == target){
                return {left+1, right+1};
            }
            else if(sum>target){
                right--;
            }
            else {
                left++;
            }
        }
        return{};
        
    }
};
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        unordered_set<int>a;

        for(int i=0; i<nums.size(); i++){
            if(a.count(nums[i])==1)
             return true;
            
            a.insert(nums[i]);
        }
        return false;

        
    }
};
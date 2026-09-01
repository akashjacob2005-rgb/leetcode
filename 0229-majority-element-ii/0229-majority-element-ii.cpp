class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {

        map<int,int>mpp;
        int n=nums.size();
        for(int i=0; i<n; i++){
            mpp[nums[i]]++;
        }
        vector<int>result;

        for(auto& pair: mpp){
            if(pair.second > n/3){
                result.push_back(pair.first);
            }
        }
        return result;
    }
};
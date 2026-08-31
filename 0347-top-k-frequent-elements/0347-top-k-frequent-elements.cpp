class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int,int>count;

        for(int i=0; i<nums.size(); i++){
            count[nums[i]]++;
        }

        vector<vector<int>> bucket(nums.size()+1);

        for(auto& pair:count){
            int num = pair.first;
            int freq = pair.second;

            bucket[freq].push_back(num);
        }

        vector<int>result;

        for(int i=bucket.size()-1; i>=0; i--){
            for(int j=0; j<bucket[i].size(); j++){
                result.push_back(bucket[i][j]);

                if(result.size() == k)
                 return result;
            }

        }
        return result;
        
    }
};
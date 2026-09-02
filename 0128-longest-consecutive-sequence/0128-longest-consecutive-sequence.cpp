class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        unordered_set<int> st;

        for(int i=0; i<nums.size(); i++){
            st.insert(nums[i]);
        }

        int longest =0;
        for(auto num: st){
            if(st.find(num-1) == st.end()){
                int count =1;
                int current = num;

                while(st.find(current+1) != st.end()){
                    count++;
                    current++;
                }

                longest = max(longest, count);
            }
        }
        return longest;
        
    }
};
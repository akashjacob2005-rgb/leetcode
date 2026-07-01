class Solution {
public:
    int majorityElement(vector<int>& a) {
        map<int,int>mpp;
        int n=a.size();

        for(int i=0; i<n; i++){
            mpp[a[i]]++;
        }

        for(auto it:mpp){
            if(it.second > n/2){
                return it.first;
            }
        }
        return -1;
        
    }
};
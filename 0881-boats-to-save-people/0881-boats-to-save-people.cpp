class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int count =0;
        int n=people.size();
        int left=0; int right =n-1;

        sort(people.begin(), people.end());

        while(left<=right){
            if(people[right]==limit){
                count++;
                right--;
            }
            else if(people[left] == limit){
                count++;
                left++;
            }
            else if(people[left]+people[right] > limit){
                count++;
                right--;
            }
            else{
                count++;
                right--;
                left++;
            }
        }
            
        return count;
        
    }
};
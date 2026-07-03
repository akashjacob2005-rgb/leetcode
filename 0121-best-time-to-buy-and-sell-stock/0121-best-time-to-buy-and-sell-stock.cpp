class Solution {
public:
    int maxProfit(vector<int>& a) {

        int n =a.size();
        int profit=0;
        int mini=a[0];

        for(int i=0; i<n; i++){
            int cost=a[i]-mini;
            profit=max(profit, cost);
            mini = min(mini,a[i]);
        }
        return profit;
        
    }
};
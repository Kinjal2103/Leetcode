//https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minp=prices[0];
        int maxp=0;
        
        int n=prices.size();
        for(int i=0;i<n;i++){
            maxp=max(maxp,prices[i]-minp);
            minp=min(minp,prices[i]);
        }
        return maxp;
    }
};

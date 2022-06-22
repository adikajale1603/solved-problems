class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i=0,j=0;
        
        int n=prices.size();
        int profit=0;
        for(int j=0;j<n;j++){
            if(prices[j]>prices[i]){
                profit=max(prices[j]-prices[i],profit);
            }
            if(prices[j]<prices[i]){
                i=j;
            }
          }
        
        return profit;
    }
};
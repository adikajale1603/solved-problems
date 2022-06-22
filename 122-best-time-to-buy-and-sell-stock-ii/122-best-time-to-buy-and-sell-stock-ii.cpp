class Solution {
public:
    int maxProfit(vector<int>& prices) {
            
           
            int n=prices.size();
        
          int profit=0;
        
          for(int i=0;i<n-1;i++){
              
              if(prices[i]<prices[i+1]){
                  int buy=prices[i];
                  while(i+1<n && prices[i]<prices[i+1]){
                      i++;
                  }
                  profit+=(prices[i]-buy);
              }
             }
        
        return profit;
       
    } 
};


 
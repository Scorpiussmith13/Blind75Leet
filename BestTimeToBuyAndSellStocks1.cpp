class Solution {
public:
    int maxProfit(vector<int>& prices) {
      
      int least_costly_stock = INT_MAX, curr_profit = 0, overall_profit=0; // self explanatory 
      
        for(int i = 0; i < prices.size(); i++)
        {
        if(prices[i] < least_costly_stock) least_costly_stock = prices[i]; //finding the least costly stock
         
        curr_profit = prices[i] - least_costly_stock; // finding current profit if sold that day
        
        if(curr_profit > overall_profit) overall_profit = curr_profit; // finding the greatest profit
        
         
        }
        
   return overall_profit; //return answer
    }
};

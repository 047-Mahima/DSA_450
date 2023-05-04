/*Method 1 :
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int profit = 0, maxProfit = INT_MIN;
        if(prices.size() == 1) return profit;

        for(int i = 0 ; i < prices.size()-1 ; i++)
        {
            for(int j = i+1 ; j < prices.size() ; j++)
            {
                if(prices[j] > prices[i])
               { 
                   profit = prices[j] - prices[i];
               }
             maxProfit = max(maxProfit, profit);
            }
        }
        return maxProfit;
    }
};
TC : O(n^2)
SC : O(1)
*/

//Method 2:
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX, maxProfit = 0;

        for(int i = 0 ; i < prices.size() ; i++)
        {
           minPrice = min(minPrice, prices[i]);
           maxProfit = max(maxProfit, prices[i] - minPrice);
        }
        return maxProfit;
    }
};

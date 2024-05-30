class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int currentProfit = 0;

        int minValue = INT_MAX;

        

        for(int i=0;i<prices.size();i++){
            if(prices[i] < minValue)
                minValue = prices[i];

            else if(prices[i]- minValue > currentProfit){
                currentProfit = prices[i]- minValue ;
            }
            
        }
        

        return currentProfit;
    }
};
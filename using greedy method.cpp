// Implement a solution to calculate remaining money after buying the cheapest two chocolates.
-----------------------------------------------------------------------------------------------

class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
       sort(prices.begin(),prices.end());
       int mincost= prices[0]+prices[1];
       if(mincost<=money){
        return money-mincost;
       }else{
        return money;
       }
    }
};

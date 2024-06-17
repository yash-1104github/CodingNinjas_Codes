int bestTimeToBuyAndSellStock(vector<int>&prices) {
    int profit=0; int mini=INT_MAX;int cost;
    for(int i=0;i<prices.size();i++){
     
        mini=min(prices[i],mini);
        cost=prices[i]-mini;
        profit =max(cost,profit);
    }
    return profit;
}

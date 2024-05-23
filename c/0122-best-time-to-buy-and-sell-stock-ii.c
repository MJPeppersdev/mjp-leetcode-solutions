int maxProfit(int* prices, int pricesSize){
    int profit = 0; // All profit made
    for (int i=1; i<pricesSize; i++)
        if (prices[i-1]<prices[i])// Only one day buy and sell
            profit += prices[i]-prices[i-1];
    return profit;
}

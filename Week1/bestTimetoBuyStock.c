

int maxProfit(int* prices, int pricesSize){
    int maxProfit = 0;
    for (int i = pricesSize-1 ; i >= 0; i--){
        for (int j = i-1; j >= 0 ; j--){
            maxProfit = maxProfit < (prices[i] - prices[j]) ? (prices[i] - prices[j]) : maxProfit;
        }
    }
    return maxProfit;
}

int bestTimeToBuyAndSellStock(vector<int>&prices) {
    // Write your code here.
    int buy = prices[0];
    int ans=0;

    for(int i=1;i<prices.size();i++){
        buy = min(buy, prices[i]);
        ans = max(ans, prices[i]-buy);
    }

    return ans;
}

class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        if len(prices) <= 1: return 0
        profit = 0
        buy, sell = -1, -1
        for i in range(1, len(prices)):
            if prices[i] > prices[i-1]:
                if buy == -1:
                    buy = prices[i-1]
                profit = max(profit, prices[i] - buy)
            else:
                if buy != -1 and prices[i] < buy:
                    buy = prices[i]

        if buy == -1:
            return 0
        
        return profit


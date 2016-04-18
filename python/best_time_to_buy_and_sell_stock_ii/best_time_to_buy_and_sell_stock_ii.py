class Solution(object):
    def maxProfit(self, prices):
        """
        :type prices: List[int]
        :rtype: int
        """
        if len(prices) == 0:
            return 0
        days = len(prices)
        dp = [0 for _ in xrange(days)]   # <-- tedious
        for i in xrange(1, days):
            if prices[i] > prices[i-1]:
                dp[i] = dp[i-1] + (prices[i] - prices[i-1])
            else:
                dp[i] = dp[i-1]
        return dp[days-1]

class Solution2(object):
    def maxProfit(self, prices):
        """
        :type prices: List[int]
        :rtype: int
        """
        if len(prices) <= 1:
            return 0

        maxProfit = 0
        for i in xrange(1, len(prices)):
            if prices[i] > prices[i-1]:
                maxProfit += (prices[i] - prices[i-1])
        return maxProfit
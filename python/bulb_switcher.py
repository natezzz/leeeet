# Explanation:
# 	1. For a prime number x: on when n = 1, off when n = x;
#   2. For a non-prime number x:
# 		a) if x is not a square number, then there are even-number factors,
#		   so it will eventually be turned off;
#		b) if x is a square number, it will stay on;
#
#	Therefore, the result is the # of square numbers <= n
class Solution(object):
    def bulbSwitch(self, n):
        """
        :type n: int
        :rtype: int
        """
        return int(math.sqrt(n))
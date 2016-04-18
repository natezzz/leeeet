class Solution(object):
    def isPowerOfFour(self, num):
        """
        :type num: int
        :rtype: bool
        """
        # Three conditions:
        # 1. num has to be positive
        # 2. num has to contain only one '1' bit (not num&(num-1))
        # 3. num's single '1' bit has to be the ones in 0x55555555
        return (num > 0) and (not num&(num-1)) and ((num & 0x55555555) == num)

class Solution(object):
    def missingNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        n = len(nums)
        sum = (1 + n) * n / 2
        for num in nums:
            sum -= num
        return sum

# one-liner
class Solution2(object):
    def missingNumber(self, nums):
        return ((1 + len(nums)) * (len(nums)) / 2) - sum(nums)

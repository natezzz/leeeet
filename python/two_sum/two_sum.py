class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        candidates = {}
        for i in xrange(len(nums)):
            diff = target - nums[i]
            if diff in candidates:
                return list((candidates[diff], i))
            candidates[nums[i]] = i
            
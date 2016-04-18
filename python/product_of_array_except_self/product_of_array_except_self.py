# space O(n)
class Solution(object):
    def productExceptSelf(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        left =  [1 for x in xrange(len(nums))]    # product of all numbers to the left of i
        right = [1 for x in xrange(len(nums))]    # product of all numbers to the right of i
        
        for i in xrange(1, len(nums)):
            left[i] = left[i-1] * nums[i-1]
        for i in reversed(xrange(0, len(nums)-1)):
            right[i] = right[i+1] * nums[i+1]
        return [left[i]*right[i] for i in xrange(len(nums))]

# space O(1)
class Solution2(object):
    def productExceptSelf(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        result =  [1 for x in xrange(len(nums))]
        
        for i in xrange(1, len(nums)):
            result[i] = result[i-1] * nums[i-1]
            
        rightSoFar = 1  # the total product so far to the right of nums[i]
        for i in reversed(xrange(0, len(nums))):
            result[i] *= rightSoFar
            rightSoFar *= nums[i]
        return result
class Solution(object):
    def singleNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        nums.sort()
        result = []
        i = 0
        while i < len(nums)-1:
            a = nums[i]
            b = nums[i+1]
            if a == b:
                i = i + 2
            else:
                result.append(a)
                if len(result) == 2: break
                i = i + 1
        if i == (len(nums)-1):
            result.append(nums[i])
        return result

class Solution2(object):
    def singleNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        xor_result = 0
        for num in nums:
            xor_result ^= num
        # calculate the least significant bit that differs between two numbers
        different_bit = (xor_result & (xor_result - 1)) ^ xor_result
        a = 0
        b = 0
        for num in nums:
            if num & different_bit == 0:
                a ^= num
            else:
                b ^= num
        return list((a, b))
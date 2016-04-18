class Solution(object):
    def countBits(self, num):
        """
        :type num: int
        :rtype: List[int]
        """
        if num == 0:
            return [0] 

        result = [0]
        currentBlock = 0
        resultLength = num + 1
        
        while len(result) < resultLength:
            result.extend(map(lambda x: x + 1, result))
            currentBlock = result[-1]
        return result[:resultLength]

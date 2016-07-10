class Solution(object):
    def reverseWords(self, s):
        """
        :type s: str
        :rtype: str
        """
        l = s.strip().split()
        l.reverse()
        return " ".join(l)

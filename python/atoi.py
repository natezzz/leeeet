class Solution(object):
    def myAtoi(self, str):
        """
        :type str: str
        :rtype: int
        """
        str = str.lstrip()
        if str == "":
            return 0
        neg = False
        val = 0
        if str[0] == '+' or str[0] == '-':
            if str[0] == '-':
                neg = True
            str = str[1:]
        for i in xrange(len(str)):
            if str[i].isdigit():
                val = val*10 + int(str[i])
            else:
                break
        retval = -val if neg else val
        if retval > 2147483647:
            return 2147483647
        elif retval < -2147483648:
            return -2147483648
        else:
            return retval
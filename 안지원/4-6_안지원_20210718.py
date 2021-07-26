class Solution:
    def addDigits(self, num: int) -> int:
        while len(str(num)) > 1:
            R = 0
            N = str(num)
            for i in N:
                R += int(i)
            num = R
        return num
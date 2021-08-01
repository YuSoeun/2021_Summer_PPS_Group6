class Solution:
    def repeatedStringMatch(self, a: str, b: str) -> int:
        lenA = len(a)
        lenB = len(b)
        
        s = a*(lenB//lenA + 2)
        if b not in s:
            return -1
        
        output = lenB//lenA + 2
        while True:
            if b not in a*(output-1):
                break
            else:
                output -= 1
        return output
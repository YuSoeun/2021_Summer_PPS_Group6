class Solution:
    def convert(self, s: str, numRows: int) -> str:
        if numRows == 1:
            return s
        R = [[] for i in range(numRows)]
        p = 0
        D = True
        for i in s:
            R[p].append(i)
            if D == True:
                p += 1
            elif D == False:
                p -= 1
            if p == 0 or p == numRows-1:
                D = not D
        
        r = sum(R, [])
        output = "".join(r)
        return output
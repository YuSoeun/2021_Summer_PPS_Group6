class Solution:
    def originalDigits(self, s: str) -> str:
        R = [0,0,0,0,0,0,0,0,0,0]
        for i in s:
            if i == "z":
                R[0] += 1
            if i == "o":
                R[1] += 1
            if i == "w":
                R[2] += 1
            if i == "h":
                R[3] += 1
            if i == "u":
                R[4] += 1
            if i == "f":
                R[5] += 1
            if i == "x":
                R[6] += 1
            if i == "s":
                R[7] += 1
            if i == "g":
                R[8] += 1
            if i == "i":
                R[9] += 1
        
        R[1] -= R[0]+R[2]+R[4]
        R[3] -= R[8]
        R[5] -= R[4]
        R[7] -= R[6]
        R[9] -= R[5]+R[6]+R[8]
        
        s = ""
        for i in range(10):
            if R[i] > 0:
                s += str(i)*R[i]
        
        return s
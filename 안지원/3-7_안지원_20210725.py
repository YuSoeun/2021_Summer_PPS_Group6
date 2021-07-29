class Solution:
    def lemonadeChange(self, bills: List[int]) -> bool:
        f = 0
        t = 0
        for i in range(len(bills)):
            if bills[i] == 5:
                f += 1
            elif bills[i] == 10:
                if f >= 1:
                    f -= 1
                    t += 1
                else:
                    return False
            else:
                if f >= 1 and t >= 1:
                    f -= 1
                    t -= 1
                elif f >= 3:
                    f -= 3
                else:
                    return False
        return True
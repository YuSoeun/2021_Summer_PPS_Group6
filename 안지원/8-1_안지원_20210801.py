def solution(cookie):
    answer = 0
    for i in range(len(cookie)-1):
        L, R = i, i+1
        Lsum, Rsum = 0, 0
        Lbool, Rbool = True, True
        while L >= 0 and R < len(cookie):
            if Lbool:
                Lsum += cookie[L]
            if Rbool:
                Rsum += cookie[R]
                
            if Lsum == Rsum:
                answer = max(answer, Rsum)
                L -= 1
                R += 1
                Lbool, Rbool = True, True
            elif Lsum > Rsum:
                R += 1
                Lbool, Rbool = False, True
            else:
                L -= 1
                Lbool, Rbool = True, False
    return answer
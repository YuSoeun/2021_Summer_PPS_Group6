def solution(number, k):
    s = []
    for i in number:
        while s and s[-1] < i and k > 0:
            k -= 1
            s.pop()
        s.append(i)
    if k > 0:
        for i in range(k):
            s.pop()
    answer = ''.join(s)
    return answer
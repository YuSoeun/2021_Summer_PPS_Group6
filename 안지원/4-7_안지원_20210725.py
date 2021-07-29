def solution(x):
    answer = True
    s = str(x)
    n = 0
    for i in s:
        n += int(i)
    if x%n != 0:
        answer = False
    return answer
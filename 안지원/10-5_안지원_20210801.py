def solution(a, b):
    answer = ["THU","FRI","SAT","SUN","MON","TUE","WED"]
    D = [31,29,31,30,31,30,31,31,30,31,30,31]
    
    return answer[(sum(D[:a-1])+b)%7]
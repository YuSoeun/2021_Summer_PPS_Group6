def numCheck(n):
    for x in range(2, n):
        if n%x == 0:
            return False
    return True

def solution(nums):
    answer = 0
    for i in range(0, len(nums)-2):
        for j in range(i+1, len(nums)-1):
            for h in range(j+1, len(nums)):
                if numCheck(nums[i]+nums[j]+nums[h]):
                    answer += 1
                
    return answer
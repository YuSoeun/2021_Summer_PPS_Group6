N = int(input())
R = 0
while True:
  if N % 5 == 0:
    R += N//5
    print(R)
    break
  N -= 3
  R += 1
  
  if N < 0:
    print(-1)
    break
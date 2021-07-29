X, Y = map(int, input().split())
R = X*1000/Y
N = int(input())
for i in range(N):
  X, Y = map(int, input().split())
  if R > X*1000/Y:
    R = X*1000/Y
print(round(R, 2))
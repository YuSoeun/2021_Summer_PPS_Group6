T = (int)(input())
for i in range(T):
  count = 0
  k = (int)(input())
  n = (int)(input())
  f = [j for j in range(1, n+1)]
  for x in range(k):
    for y in range(1, n):
      f[y] += f[y-1]
  print(f[-1])
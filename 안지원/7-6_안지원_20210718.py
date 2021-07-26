N = int(input())
R = []
for i in range(N):
  R.append(list(map(int, input().split())))

R.sort(key=lambda x:(x[0], x[1]))
for i in R:
  print(i[0], i[1])
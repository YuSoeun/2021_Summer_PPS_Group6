N = int(input())
d = []
for i in range(N):
  d.append(list(input().split()))

d.sort(key=lambda x:int(x[0]))

for i in d:
  print(i[0], i[1])
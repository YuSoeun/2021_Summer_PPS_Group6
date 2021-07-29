N = int(input())
l = list(map(int, input().split()))
l = list(set(l))
l.sort()

for i in l:
  print(i, end=" ")
N, L = map(int, input().split())
h = list(map(int, input().split()))
h.sort()

for i in h:
  if i <= L:
    L += 1
  else:
    break
print(L)
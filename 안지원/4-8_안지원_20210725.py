A, B, C = map(int, input().split())
if B >= C:
  print(-1)
else:
  c = A / (C-B)
  c += 1
  print(int(c))
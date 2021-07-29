N = input().split('-')
S = 0
M = N[0].split('+')
for i in M:
  S += int(i)
for j in range(1,len(N)):
  M = N[j].split('+')
  for i in M:
    S -= int(i)
print(S)
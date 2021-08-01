s = ["zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"]

M, N = map(int, input().split())
R = []
for i in range(M, N+1):
  R.append([i, ''.join([s[int(j)] for j in str(i)])])
R.sort(key = lambda x:x[1])
for i in range(len(R)):
  print(R[i][0], end=' ')
  if (i+1)%10 == 0:
    print("")
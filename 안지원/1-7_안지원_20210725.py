M, N = map(int, input().split())
windows = [[""]*N for i in range(M)]
window = [0, 0, 0, 0, 0]
for i in range(5*M+1):
  inLine = input()
  if i%5 != 0:
    for j in range(N):
      windows[int(i//5)][j] += inLine[(5*j+1):(5*j+2)]

for i in range(M):
  for j in range(N):
    num = windows[i][j].count('*')
    window[num] += 1

print(window[0],window[1],window[2],window[3],window[4])
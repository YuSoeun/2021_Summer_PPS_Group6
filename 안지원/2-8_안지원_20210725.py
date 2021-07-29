N = int(input())
s = ["" for i in range(N)]
for i in range(N):
  s[i] = input()
  for j in range(len(s[i])):
    n = ord(s[i][j])+1
    if n > 90:
      n -= 26
    s[i] = s[i][:j]+chr(n)+s[i][j+1:]

for i in range(N):
  print("String #{}".format(i+1))
  print(s[i])
  if i != N-1:
    print()
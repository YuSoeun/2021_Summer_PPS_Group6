N = int(input())
lists = ["" for i in range(N)]
alpha = [0 for i in range(26)]
for i in range(N):
  lists[i] = input()
  n = ord(lists[i][0]) - 97
  alpha[n] += 1
R = ""
for i in range(26):
  if alpha[i] >= 5:
    R += chr(i+97)
if R == "":
  print("PREDAJA")
else:
  print(R)
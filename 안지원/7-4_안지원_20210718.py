S = input()
R = []
for i in range(len(S)):
  R.append(S[i:])
R.sort(key=lambda x:x)
for i in R:
  print(i)
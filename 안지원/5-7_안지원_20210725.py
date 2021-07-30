A = ["c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="]
S = input()
n = 0
for i in A:
  for j in range(S.count(i)):
    S = S.replace(i, " ")
    n += 1
S = S.replace(" ", "")
print(n+len(S))
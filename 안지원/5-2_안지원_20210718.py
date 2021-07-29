N = int(input())

for i in range(N):
  a = list(map(str, input().split()))
  R = float(a[0])
  for i in range(1, len(a)):
    if a[i] == "@":
      R *= 3
    if a[i] == "%":
      R += 5
    if a[i] == "#":
      R -= 7
  print("{:.2f}".format(R))
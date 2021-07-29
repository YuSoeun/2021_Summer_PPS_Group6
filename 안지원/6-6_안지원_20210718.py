def sum(I):
  count = 0
  for i in I:
    if i.isdigit():
      count += int(i)
  return count

N = int(input())
R = []
for i in range(N):
  R.append(input())

R.sort(key=lambda x:(len(x), sum(x), x))
for i in R:
  print(i)
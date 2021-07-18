N, K = map(int, input().split())
D = [x for x in range(1, N+1)]
R = []
P = 0
while (len(D) > 0):
  P += K-1
  if P > len(D)-1:
    P %= len(D)
  R.append(str(D.pop(P)))

print("<{result}>".format(result = ", ".join(R)))
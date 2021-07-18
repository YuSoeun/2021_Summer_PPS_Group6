N = input()
R = []
for i in N:
  R.append(i)
R.sort(reverse = True)
print("{l}".format(l = "".join(R)))
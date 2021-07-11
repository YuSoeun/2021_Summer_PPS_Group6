s = set()
for i in range(10):
  num = (int)(input())
  num %= 42
  s.add(num)
s = list(s)
print(len(s))
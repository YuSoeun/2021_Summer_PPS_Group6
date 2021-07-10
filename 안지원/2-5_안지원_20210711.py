str1 = input().upper()
set1= list(set(str1))

ch = []
for i in set1:
  count = str1.count(i)
  ch.append(count)

if ch.count(max(ch)) > 1:
  print("?")
else:
  print(set1[ch.index(max(ch))])
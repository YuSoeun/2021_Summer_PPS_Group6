maxNum=0
maxIndex=0
for i in range(5):
  n1, n2, n3, n4 = map(int, input().split())
  num = n1+n2+n3+n4
  if maxNum < num:
    maxNum = num
    maxIndex = i+1
print(maxIndex, maxNum)
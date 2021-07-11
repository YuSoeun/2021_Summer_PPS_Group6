numbers = ["ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ"]

num = input()
minTime = 0

for i in num:
  for j in range(len(numbers)):
    if i in numbers[j]:
      minTime += j+3
print(minTime)
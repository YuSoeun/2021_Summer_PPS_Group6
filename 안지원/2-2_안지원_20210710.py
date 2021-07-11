count = (int)(input());

for i in range(count):
  grade = 0
  oCount = 0
  str1 = input();
  for s in str1:
    if s == "O":
      grade += 1+oCount
      oCount += 1
    elif s == "X":
      oCount = 0
  print(grade)
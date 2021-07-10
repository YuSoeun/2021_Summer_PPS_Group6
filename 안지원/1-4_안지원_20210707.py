c1 = int(input())
for i in range(c1):
  count = 0
  grade = list(map(int, input().split()))
  avg = sum(grade[1:])/grade[0]
  for num in grade[1:]:
    if num > avg:
      count += 1
  print(f'{count/grade[0]*100:.3f}%')
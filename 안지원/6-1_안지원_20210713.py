8# N = (int)(input())
# q = [x for x in range(1, N+1)]
# while len(q) > 1:
#   q.pop(0)
#   q.append(q.pop(0))
# print(q.pop(0))

N = (int)(input())
card = 2

while True:
  if (N == 1 or N == 2):
    print(N)
    break
  card *= 2
  if (card >= N):
    print((N-(card//2))*2)
    break
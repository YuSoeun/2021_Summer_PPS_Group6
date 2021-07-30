N, K = map(int, input().split())
coins = [int(input()) for i in range(N)]
n = 0
for i in reversed(coins):
  if i <= K:
    n += K//i
    K = K%i
print(n)
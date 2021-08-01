N, K = map(int, input().split())
R = list(map(int, input().split()))
R.sort()
print(R[K-1])
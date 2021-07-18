def search(L, v, start, end):
  if start > end:
    return 0
  mid = (start+end) // 2
  if L[mid] == v:
    return 1
  elif L[mid] > v:
    end = mid-1
  else:
    start = mid+1
  
  return search(L, v, start, end)

N = int(input())
A = list(map(int, input().split()))
A.sort()
M = int(input())
X = list(map(int, input().split()))

for i in X:
  print(search(A, i, 0, len(A)-1))
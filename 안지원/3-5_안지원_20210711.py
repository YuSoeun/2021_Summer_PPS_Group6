N, first = map(int, input().split())

gg, gb, bg, bb = map(float, input().split())

gCount = [0 for i in range(N)]
bCount = [0 for i in range(N)]

if first == 0:
  gCount[0] = gg
  bCount[0] = gb
else:
  gCount[0] = bg
  bCount[0] = bb

for i in range(1, N):
  gCount[i] = gCount[i-1]*gg + bCount[i-1]*bg
  bCount[i] = gCount[i-1]*gb + bCount[i-1]*bb

print(round(gCount[N-1]*1000))
print(round(bCount[N-1]*1000))
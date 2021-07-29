N = int(input())
R = 0

for i in range(N):
  G = True
  use = [False for i in range(26)]
  S = input()

  for j in range(len(S)-1):
    if S[j] != S[j+1]:
      A = ord(S[j])-97
      if use[A] != False:
        G = False
      use[A] = True

  if G == True and use[ord(S[-1])-97] == False:
    R += 1
print(R)
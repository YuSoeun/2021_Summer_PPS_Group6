N = int(input())
c = N // 14

if N%14 == 0 or N%14 == 2: 
  print("sukhwan")
elif N%14 == 1 or N%14 == 13: 
  print("baby")
elif N%14 == 5: 
  print("very")
elif N%14 == 6: 
  print("cute")
elif N%14 == 9: 
  print("in")
elif N%14 == 10: 
  print("bed")
elif N%14 == 3 or N%14 == 7 or N%14 == 11:
  if c < 3: 
    print("tururu"+"ru"*c)
  else: 
    print("tu+ru*%d" %(c+2))
else:
  if c < 4: 
    print("turu"+"ru"*c)
  else: 
    print("tu+ru*%d" %(c+1))
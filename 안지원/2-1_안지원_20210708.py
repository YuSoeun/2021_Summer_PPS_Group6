while True:
  str = input()
  com = "aeiou"
  check1 = 1
  check2 = 0
  if str == "end":
    break;
  for i in str:
    if i in com:
      check1 = 0
  if check1 == 0:
    for i in range(0, len(str)-1):
      if str[i] == str[i+1] and str[i] not in "eo":
        check2 = 1
  for i in range(0, len(str)-2):
    if str[i] in com and str[i+1] in com and str[i+2] in com:
      check2 = 1
    elif str[i] not in com and str[i+1] not in com and str[i+2] not in com:
      check2 = 1
  
  if check1 == 0 and check2 == 0:
    print("<"+str+"> is acceptable.")
  else:
    print("<"+str+"> is not acceptable.")
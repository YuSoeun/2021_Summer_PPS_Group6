s = input()
result = ""
for i in s:
  i = ord(i)-3
  if i < 65:
    i = i+26
  result += chr(i)
print(result)
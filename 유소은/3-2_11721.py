i = 0

s = input();
size = len(s);

for i in range (int(size/10)):
    print(s[:10])
    s = s[10:]

if (len(s) > 0):
    print(s)
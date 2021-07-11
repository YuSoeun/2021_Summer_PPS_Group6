n = int(input())

for i in range (n):
	s = input()
	s = s.split()
	
	result = float(s[0])
	
	for op in s[1:]:
		if (op == '@'):
			result *= 3
		elif (op == '%'):
			result += 5
		elif (op == '#'):
			result -= 7
	print("%.2f" % result)

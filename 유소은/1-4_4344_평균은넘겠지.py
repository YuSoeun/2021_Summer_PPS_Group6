n = int(input())

for i in range (n):
	s = input()
	s = s.split()
	sum = 0.0
	count = 0

	for score in s[1:]:
		sum += float(score)
	mean = sum / int(s[0])
	for score in s[1:]:
		if (int(score) > mean):
			count += 1
	print("%.3f" % (count*100.0/int(s[0])) + '%')

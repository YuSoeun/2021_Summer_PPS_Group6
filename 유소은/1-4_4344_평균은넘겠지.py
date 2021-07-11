n = int(input())

for i in range (n):
	s = input()
	s = s.split()
	sum = 0.0
	count = 0.0
	for score in s:
		sum += int(score)
	mean = sum / len(s)
	for score in s:
		if (int(score) > mean):
			count += 1
	print("%.3f" % (count/len(s)))

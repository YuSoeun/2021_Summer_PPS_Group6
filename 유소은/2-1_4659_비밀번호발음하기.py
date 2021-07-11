while (1):
	s = input()
	if (s == "end"):
		break
	
	# 모음(a,e,i,o,u) 하나를 반드시 포함
	for vowel in ['a', 'e', 'i', 'o', 'u']:
		if (vowel in s):
			flag = 1
	if (flag == 0):
		print("<" + s+ "> is not acceptable")

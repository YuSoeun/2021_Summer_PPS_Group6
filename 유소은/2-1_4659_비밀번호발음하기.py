# -*- coding: utf8 -*-
vowels = ['a', 'e', 'i', 'o', 'u']

while (1):
	flag = 0
	s = input()
	if (s == "end"):
		break
	
	# 모음 하나를 반드시 포함
	for vowel in vowels:
		if (vowel in s):
			flag = 1
	if (flag == 0):
		print("<" + s+ "> is not acceptable.")

	# 모음/자음 3개 연속인지, 같은 글자 두번 나오는지 확인
	vowels_count = 0
	consonants_count = 0
	ch_ago = ''

	for ch in s:
		# 모음/자음 3개 연속인지
		if (ch in vowels):
			vowels_count += 1
			if (consonants_count > 0):
				consonants_count = 0
		else:
			consonants_count += 1
			if (vowels_count > 0):
				vowels_count = 0
		if (consonants_count >= 3 or vowels_count >= 3):
			flag = 0
			break

		# 같은 글자 두번 나오는지
		if (ch != 'e' and ch != 'o'):
			if (ch == ch_ago):
				flag = 0
				break
		ch_ago = ch

	if (flag == 0):
		print("<" + s+ "> is not acceptable.")
	else:
		print("<" + s+ "> is acceptable.")
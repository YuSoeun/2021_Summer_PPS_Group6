s = input()
s = s.split('-')
added = []

for ex in s:
	ex = ex.split('+')
	sum = 0
	for num in ex:
		sum += int(num)
	added.append(sum)
	
result = added[0]
for num in added[1:]:
	result -= num

print(result)
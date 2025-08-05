str=''

for x in range(10,1,-1):
	str = str + f'{x}' + '個 '
	if x%3==2:
		print(str + '食べました。')
		str=''

print('最後に1個食べました。')
str=''

for x in range(1,10):
	str = str + f'{x}' + '個 '
	if x%3==0:
		print(str + 'あります。')
		str=''

print('全部で10個あります。')
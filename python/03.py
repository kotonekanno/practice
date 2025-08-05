age = int(input('年齢を入力してください：'))

if age >= 20:
	print('飲酒可')
	if age <= 23:
		print('ビール無料')
	else:
		print('ビール有料')
else:
	print('飲酒不可')
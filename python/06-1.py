#今日の月日を入力すると何日目かを計算する

days=0
month=int(input("月："))
date=int(input("日："))

for month in range(1,month):
	match month:
		case 2:
			days+=28
		case 4|6|9|11:
			days+=30
		case _:
			days+=31
days+=date

print(days,"日目")
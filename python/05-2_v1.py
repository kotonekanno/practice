days = 0
total = 0

while True:
	try:
		turu_per_day = int(input("一日に何羽折りますか？："))
		if turu_per_day<=0: raise ValueError

		else:
			while total<1000:
				total += turu_per_day
				days += 1
			print(f"一日{turu_per_day}羽折ると、{days}日で1000羽に達します")
			break
	
	except: print("自然数で入力してください")
height = 1.78
weight = 75

while True:
	bmi = float(weight/(height*height))
	print(f"{weight} kg：bmiは{bmi}")
	weight -= 1
	if bmi < 22: break
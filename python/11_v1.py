def calc_sum(scores):
	sum = 0
	for i in scores:
		sum += i
	return sum

def calc_avr(scores):
	return calc_sum(scores) / len(scores)

scores = [58,80,72]
sum = calc_sum(scores)
avr = calc_avr(scores)
print(sum,avr)
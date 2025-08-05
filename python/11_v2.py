def calc_sum(name_score):
	sum = [0,0,0]  #[英語、数学、国語]とする
	for i in range(3):
		for j in range(len(name_score)):
			sum[i] += name_score[j][i+1]
	return sum

name_score = [
	['Aさん',58,80,72],
	['Bさん',81,75,82],
	['Cさん',97,90,69],
	['Dさん',30,48,96],
]

sum = calc_sum(name_score)

print(sum)
for score in sum:
	print(score / len(name_score))
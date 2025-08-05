name_score = [
	['Aさん',58,80,72],
	['Bさん',81,75,82],
	['Cさん',97,90,69],
	['Dさん',30,48,96],
]
total = [0,0,0]  # [国語,数学,英語]とする

for n_s in name_score:
	for t in range(len(total)):
		total[t] += n_s[t+1]

for i in range(len(total)):
	print(total[i] / len(name_score))
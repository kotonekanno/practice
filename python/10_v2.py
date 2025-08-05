def child(fa_height,mo_height,girl):
	if girl:
		height = (fa+mo-13)/2
	else:
		height = (fa+mo+13)/2
	return height

fa = 183
mo = 159

boy = child(fa,mo,False)
print("男の子の身長：",boy)
girl = child(fa,mo,True)
print("女の子の身長：",girl)

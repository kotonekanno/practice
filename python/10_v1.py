def boy_height(fa_height,mo_height):
	height = (fa+mo+13)/2
	return height
def girl_height(fa_height,mo_height):
	height = (fa+mo-13)/2
	return height

fa = 183
mo = 159

boy = boy_height(fa,mo)
print("男の子の身長：",boy)
girl = girl_height(fa,mo)
print("女の子の身長：",girl)
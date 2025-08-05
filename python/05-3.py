budget = 10000

while budget > 0:
	price = int(input("\n商品の値段："))

	if price <= budget:
		budget -= price
		print(f"{price} 円購入")
		print(f"{budget} 円残っています")
	else:
		print("所持金が足りません")
		yn = input("買い物を続けますか？（y/n）：")
		if yn == 'y': continue
		elif yn == 'n': break
	
print("\n買い物終了")
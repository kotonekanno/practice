class karaoke:
	def __init__(self,entrance_fee):
		self.entrance_fee = entrance_fee
	def total_price(self,stay_time):
		return self.entrance_fee + 250 * stay_time

karaoke_a = karaoke(300)
price = karaoke_a.total_price(2)
print(price)
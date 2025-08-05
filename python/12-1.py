class fruit:
	def __init__(self,race,price):
		self.race = race
		self.price = price
	def total_price(self):
		print(self.price * 1.1)

apple = fruit("津軽",120)
apple.total_price()
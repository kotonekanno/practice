class Student:
	def __init__(self, scores):
		self.scores = scores
		
	def calc_total(self):
		self.total = 0
		for score in self.scores:
			self.total += score
		return self.total
	
	def calc_avr(self):
		return self.total / len(self.scores)
	
A = Student([58,80,72])
print(A.calc_total())
print(A.calc_avr())
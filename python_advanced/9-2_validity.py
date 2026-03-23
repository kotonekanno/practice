import numpy as np

result = np.array([8,3,0,4,1,3,3,2,6,7])
correct_answer = np.array([8,4,1,4,1,3,3,2,8,7])

validity = np.mean(result == correct_answer)
print(validity)
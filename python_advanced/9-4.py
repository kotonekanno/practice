import numpy as np
import matplotlib.pyplot as plt

point = np.array([1, 1])
x_sym_tr = np.array([[1, 0], [0, -1]])
after_point = x_sym_tr @ point

plt.figure(figsize=(3, 2.2))
plt.xlim(-1.5, 1.5)
plt.ylim(-1.2, 1.5)
plt.axhline(0)
plt.axvline(0)
plt.scatter(point[0], point[1])
plt.scatter(after_point[0], after_point[1])
plt.show()
import numpy as np
import matplotlib.pyplot as plt

x = np.array(list(range(-10, 11)))
y = x**2

plt.plot(x, y)
plt.show()
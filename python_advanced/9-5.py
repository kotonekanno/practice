import numpy as np
import matplotlib.pyplot as plt

tri = np.array([[1,1],[4,3],[4,1]])

x_sym_tra = np.array([[1,0],
                      [0,-1]])

tri_b = x_sym_tra @ tri.T

plt.figure(figsize=(3,5))
plt.xlim(0,5)
plt.ylim(-4,4)
plt.axhline(0)
plt.grid()
plt.fill(tri.T[0], tri.T[1], 'r', alpha=0.5)
plt.fill(tri_b[0], tri_b[1],'b',alpha=0.5)
plt.show()
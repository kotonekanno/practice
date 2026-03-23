import numpy as np
import matplotlib.pyplot as plt

tri = np.array([[0,0],[1,0],[1,1]])

angle = np.radians(90)
lotate = np.array([[np.cos(angle), -np.sin(angle)],
                   [np.sin(angle), np.cos(angle)]])
tri_b = lotate @ tri.T

plt.figure(figsize=(3,2))
plt.xlim(-1.5, 1.5)
plt.ylim(-0.5, 1.5)
plt.axhline(0)
plt.axvline(0)
plt.fill(tri.T[0], tri.T[1], 'r', alpha=0.5)
plt.fill(tri_b[0], tri_b[1],'b',alpha=0.5)
plt.show()
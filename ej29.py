import os
import numpy as np
import matplotlib.pyplot as plt

plt.figure()
data = np.loadtxt('ej29.dat')
plt.plot(data[:,0], data[:,1])

plt.axis('square')
plt.xlabel('X')
plt.ylabel('Y')
plt.savefig('difusion.png')
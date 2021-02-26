# This is a sample Python script using numpymatrix, illustrating the deprecated API

import numpymatrix as npm
import numpy as np

# the old matrix API
A = npm.matrix([[1, 2], [3, 4]])
# the new API
B = np.array([[1, 2], [3, 4]])

# identical
print(A)
print(B)

# transpose OK
print(A.T)
print(B.T)

# @ is same
print(A @ A)
print(B @ B)

# same
print(np.multiply(A, A))
print(np.multiply(B, B))

# * product is NOT OK
print(A * A)
print(B * B)

# ** power is NOT OK
print(A**2)
print(B**2)
import numpy as np
import os, path

A = np.array([[10,2,-1],[-3,-6,2],[1,1,5]])
b = np.array([27,-61.5,-21.5])
X_sol = []
epsErr = []
x_10=0
x_20 = 0
x_30 = 0

# Método de Jacobi
for it in range(0,10):
    if it==0:
        x_1k = (-A[0,1]*x_20-A[0,2]*x_30+b[0])/A[0,0]
        x_2k = (-A[1,0]*x_10-A[1,2]*x_30+b[1])/A[1,1]
        x_3k = (-A[2,0]*x_10-A[2,1]*x_20+b[2])/A[2,2]
        x_kk = np.array([x_1k,x_2k,x_3k])
        X_sol.append(x_kk)
    else:
        x_1k = (-A[0,1]*x_kk[1]-A[0,2]*x_kk[2]+b[0])/A[0,0]
        x_2k = (-A[1,0]*x_kk[0]-A[1,2]*x_kk[2]+b[1])/A[1,1]
        x_3k = (-A[2,0]*x_kk[0]-A[2,1]*x_kk[1]+b[2])/A[2,2]
        eps1k = abs((x_kk[0]-x_1k)/x_kk[0])*100
        eps2k = abs((x_kk[1]-x_2k)/x_kk[1])*100
        eps3k = abs((x_kk[2]-x_3k)/x_kk[2])*100
        eps_array = np.array([eps1k,eps2k,eps3k])
        epsErr.append(eps_array)
        X_sol.append(x_kk)
        x_kk = np.array([x_1k,x_2k,x_3k])
print(X_sol)

import numpy as np
n=input()
a=np.zeros(n)
for i in range(n/2):
    for j in range(n/2):
        a[i][j]=a[n-1-i][j]=a[i][n-1-j]=a[n-1-i][n-1-j]=n-2-i-j
    

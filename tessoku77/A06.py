import numpy as np
n,q=map(int,input().split())
a=list(map(int,input().split()[:n]))

goukei=np.zeros(n+1)
goukei[0]=0

for i in range(1,n+1):
    goukei[i]=goukei[i-1]+a[i-1]

for i in range(q):
    l,r=map(int,input().split())
    print(int(goukei[r]-goukei[l-1]))
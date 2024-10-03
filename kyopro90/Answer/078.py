#頂点N個、辺M個の単純無向を作成する
import numpy as np

N,M=map(int,input().split())
list=np.zeros(N)

for i in range(M):
    a,b=map(int,input().split())
    if(a<b):
        list[b-1]+=1
    elif(a>b):
        list[a-1]+=1

count=0
for i in range(N):
    if(list[i]==1):
        count+=1

print(count)

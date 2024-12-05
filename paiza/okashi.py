#ナップザック問題
#条件
#所持金が最小になる買い方を求める
#なるべく多くの種類のお菓子を買う
#N=お菓子の種類
#X=所持金
#x=お菓子の価格

import numpy as np
import sys
def Buy(i,j,x,Pocket):
    Pocket[i][j+x]=0
    return Pocket

N,X=map(int,input().split())
x=np.zeros(N)
Pocket=np.full((N+1,X+1),-sys.float_info.max)
for i in range(N):
    x[i]=int(input())
x=np.sort(x)
for i in range(1,N+1):
    Pocket[i][0]=0
    for j in range(X+1):
        if Pocket[i-1][j]==0 and j+x[i-1]<X:
            Pocket=Buy(i,j,int(x[i-1]),Pocket)
result=np.where(Pocket[N]==0)
print(result)


    

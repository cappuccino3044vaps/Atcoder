import numpy as np

H,W,N=map(int,input().split())

X=np.zeros((H+1,W+1))
S=np.zeros((H+1,W+1))


for i in range(N):
    A,B,C,D=map(int,input().split())

    X[A][B]+=1
    X[A][D+1]-=1
    X[C+1][B]-=1
    X[C+1][D+1]+=1

    for j in range(H):
        for k in range(W):
            S[j][k]=S[j][k-1]+X[j][k]

    for j in range(H):
        for k in range(W):
            S[j][k]=S[j-1][k]+S[j][k]
print(S)

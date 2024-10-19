import numpy as np

H,W=map(int,input().split())

X=np.zeros((H,W))

for i in range(H):
    X[i]=list(map(int,input().split()))

Q=int(input())
S=np.zeros((H,W))

for i in range(H):
    for j in range(W):
        if j==0:
            S[i][j]=X[i][j]
        else:
            S[i][j]=S[i][j-1]+X[i][j]

for i in range(W):
    for j in range(H):
        if j==0:
            S[j][i]=X[j][i]
        else:
            S[j][i]=S[j-1][i]+X[j][i]

for i in range(Q):
    A,B,C,D=map(int,input().split())
    if A==1 and B==1:
        print(S[C-1][D-1])
    elif A==1 and B!=1:
        print(S[C-1][D-1]-S[C-1][B-2])
    elif A!=1 and B==1:
        print(S[C-1][D-1]-S[A-2][D-1])
    else:
        print(S[C-1][D-1]-S[C-1][B-2]-S[A-2][D-1]+S[A-2][B-2])        

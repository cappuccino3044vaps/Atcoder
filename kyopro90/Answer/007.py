import numpy as np
N=input()
A=list[map(int,input().split)]
Q=input()
B=np.zeros(Q)
for i in range(Q):
    B[i]=input()

#Aを昇順にソートしてA[N/2]で二分探索
A.sort()
for i in range(Q):
    left=0
    right=N-1
    while left<=right:
        mid=(left+right)//2
        if A[mid]==B[i]:
            print(0)
            break
        elif A[mid]<B[i]:
            left=mid+1
        else:
            right=mid-1
    if left>right:
        print(min(abs(A[left]-B[i]),abs(A[right]-B[i])))


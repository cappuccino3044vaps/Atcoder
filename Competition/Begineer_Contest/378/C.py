N=int(input())
A=list(map(int,input().split()))

B=[]

for i in range(len(A)):
    flag=False
    for j in range(i-1,-1,-1):
        if A[i]==A[j]:
            B.append(j+1)
            flag=True
            break
    if flag==False:
        B.append(-1)

for i in range(len(B)):
    print(B[i],end=" ")
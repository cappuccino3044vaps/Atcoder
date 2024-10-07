n,k=map(int,input().split())
count=0
for i in range(1,n+1):
    for j in range(1,n+1):
        num=k-(i+j)
        if(n>=num and num>0):count+=1
print(count)
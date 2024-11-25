N=int(input())
A,B,C=map(int,input().split())

#A,B,Cを降順にソートしてリストに格納
L=[A,B,C]
L.sort(reverse=True)

max=9999
sum=0
for i in range(max):
    for j in range(max-i):
        sum+=L[1]*i+L[2]*j
        if(N-L[0]*i+L[1]*j)%L[2]==0:
            k=(N-L[0]*i+L[1]*j)//L[2]
            print(i+j+k)
            exit()
        
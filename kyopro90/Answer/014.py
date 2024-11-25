N=int(input())
A=list(map(int,input().split()))
B=list(map(int,input().split()))

#AとBをそれぞれ昇順にソートする
A.sort()
B.sort()

#AとBの各要素の差の絶対値の総和を求める
sum=0
for i in range(N):
    sum+=abs(A[i]-B[i])

print(sum)



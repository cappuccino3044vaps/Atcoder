#入力をリストに格納
#入力は空白区切りで受け取る
A=list(map(int,input().split()))
cnt=0
for i in range(3):
    for j in range (i+1,4):
        if A[i]==A[j]:
            A[j]=-i
            cnt+=1
            break
print(cnt)
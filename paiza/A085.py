import numpy as np
def check_black(i,j,tag):
    current_i = i
    current_j = j
    flag = True
    while flag:
        MAP[current_i][current_j] = tag
        # 移動方向をリストで管理
        directions = [(1, 0), (0, 1), (-1, 0), (0, -1)]
        moved = False
        for di, dj in directions:
            if MAP[current_i + di][current_j + dj] == 1:
                current_i += di
                current_j += dj
                moved = True
                break
        if not moved:
            if current_i == i and current_j == j:
                break
            current_i = i
            current_j = j
H,W=map(int,input().split())

MAP=np.zeros((H+4,W+4),dtype=int)

for i in range(H):
    C=list(input())
    for j in range(W):
        if C[j]=="#":
            MAP[i+2][j+2]=2
        elif C[j]==".":
            MAP[i+2][j+2]=1
        else:
            exit()
tag_s=3
tag_e=4
check_black(2,2,tag_s)
check_black(H+1,W+1,tag_e)
count=0
for i in range(2,H+2):
    for j in range(2,W+2):
        if MAP[i][j]==tag_s:
            if MAP[i+2][j]==tag_e:
                count+=1
            if MAP[i][j+2]==tag_e:
                count+=1
            if MAP[i-2][j]==tag_e:
                count+=1
            if MAP[i][j-2]==tag_e:
                count+=1
print(count)
           

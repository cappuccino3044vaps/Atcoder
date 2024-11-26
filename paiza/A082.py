import numpy as np
def pipeline_calculator(i,j,count):
    MAP[i][j]=0
    if(MAP[i][j]>2):
        count+=1
        return count
    if(MAP[i-1][j]>=2):
        count+=1
        count=pipeline_calculator(i,j,count)
    if(MAP[i+1][j]>=2):
        count+=1
        count=pipeline_calculator(i,j,count)
    if(MAP[i][j-1]>=2):
        count+=1
        count=pipeline_calculator(i,j,count)
    if(MAP[i][j+1]>=2):
        count+=1
        count=pipeline_calculator(i,j,count)
    return count
H,W=map(int,input().split())
MAP=np.zeros((H+2,W+2))
S_1=H*W
S_2=0
POI=0
for i in range(1,H+1):
    tmp=input()
    for j in range(1,W+1):
        if(tmp[j-1]=='#'):
            MAP[i][j]=1
            S_2+=1
        elif(tmp[j-1]=='.'):
            MAP[i][j]=-1
        else:
            print("InputError")
            exit()
for i in range(1,H+1):
    for j in range(1,W+1):
        if(MAP[i][j]==1):
            count=2
            if(MAP[i-1][j]==2):count+=1
            if(MAP[i+1][j]==2):count+=1
            if(MAP[i][j-1]==2):count+=1
            if(MAP[i][j+1]==2):count+=1
            MAP[i][j]==count
for i in range(1,H+1):
    for j in range(1,W+1):
        if(MAP[i][j]==1):
            count=1
            count=pipeline_calculator(i,j,count)
            POI+=count
print(S_1)
print(POI)
import numpy as np
H,W=map(int,input().split())

map=np.zeros((H,W))
flag=True
for i in range(H):
    dot=input()
    for j in range(W):
        if (dot[j]=="#"):
            map[i][j]=1
        elif (dot[j]=="."):
            map[i][j]=0
        elif (dot[j]=="S"):
            if (flag==True):
                map[i][j]=2
                flag=False
            else:exit("morethan_S")
        else:
            exit("error")

start=np.where(map==2)
EX=False
posy=start[0][0]
posx=start[1][0]
while (EX==False):
    map[posy][posx]=1
    if(posy==H-1 or posy==0 or posx==W-1 or posx==0):
        EX=True
        break
    if(map[posy-1][posx]==0):
        posy-=1
    elif(map[posy][posx+1]==0):
        posx+=1
    elif(map[posy+1][posx]==0):
        posy+=1
    elif(map[posy][posx-1]==0):
        posx-=1
    else:break
if(EX==True):
    print("YES")
else:print("NO")
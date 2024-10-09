
import numpy as np

#グローバル変数として使用：(int)最大値
max=0
#Cards[int][int],(int)sum:current_sum_value,(int)h:current_h_value,(int)w:current_w_value,(int)H:max_h_value,(int)W:max_w_value
def caliculator(Cards,sum,h,w,H,W):
    global max
    sum+=Cards[h][w]
    if(h+1==H):
        if(sum>max):max=sum
        
    else:
        if(w-1>=0):caliculator(Cards,sum,h+1,w-1,H,W)
        caliculator(Cards,sum,h+1,w,H,W)
        if(w+1<W):caliculator(Cards,sum,h+1,w+1,H,W)

H,W= map(int,input().split())
Cards=[]
for h in range(H):
    Cards.append(list(map(int,input().split())))
for w in range(W):
    sum=0
    caliculator(Cards,sum,0,w,H,W)
print(max)
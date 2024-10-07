a,b=map(int,input().split())
flag=False
for x in range(a,b):
    if(x%100==0):flag=True
if(flag):print("Yes")
else:print("No")

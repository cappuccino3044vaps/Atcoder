n,x=map(int,input().split())
flag=False
a=input().split()
a=[int(num)for num in a[:n]]
for i in range(n):
    if(a[i]==x):flag=True

if(flag):print("Yes")
else:print("No")
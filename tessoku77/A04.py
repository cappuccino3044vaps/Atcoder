n=int(input())

for i in range(9,-1,-1):
    if(n>=2**i):
        print('1',end='')
        n=n-2**i
    else:print('0',end='')


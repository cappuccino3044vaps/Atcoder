import numpy as np

D = int(input())
N = int(input())
Days=np.zeros(D)

def attendance(Days,i):
    sum=0
    for j in range(i):
        sum+=Days[j]
    return sum

for i in range(N):
    First, Last = map(int, input().split())
    Days[First-1] += 1
    Days[Last]-=1

for i in range(D):
    print(int(attendance(Days,i+1)))


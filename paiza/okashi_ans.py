# coding: utf-8
def combinations(iterable, r):
    # combinations('ABCD', 2) --> AB AC AD BC BD CD
    # combinations(range(4), 3) --> 012 013 023 123
    pool = tuple(iterable)
    n = len(pool)
    if r > n:
        return
    indices = list(range(r))
    yield tuple(pool[i] for i in indices)
    while True:
        for i in reversed(range(r)):
            if indices[i] != i + n - r:
                break
        else:
            return
        indices[i] += 1
        for j in range(i+1, r):
            indices[j] = indices[j-1] + 1
        yield tuple(pool[i] for i in indices)
N,money = map(int,input().split())
All = []
for n in range(N):
    All.append(int(input()))
All.sort()
temp = 0
count = 0
for i in All:
    temp += i 
    if temp > money:
        break
    count += 1
temp = []
for i in combinations(All,count):
    s = sum(i)
    if s <= money:
        temp.append(money-s)
print(min(temp))

N=int(input())
q_list=[]
r_list=[]
q_list.append(0)
r_list.append(0)
for i in range(N):
    q,r=map(int,input().split())
    q_list.append(q)
    r_list.append(r)
Q=int(input())
for i in range(Q):
    t,d=map(int,input().split())
    for j in range(d,101):        
        if j%q_list[t]==r_list[t]:
            print(j)
            break


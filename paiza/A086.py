def dfs(x,y):
    if x<0 or H<=x or y<0 or W<=y or S[x][y]=="#" or visited[x][y]:
        return
    visited[x][y]=True
    dfs(x+1,y)
    dfs(x-1,y)
    dfs(x,y+1)
    dfs(x,y-1)
H,W=map(int,input().split())
S=[input() for _ in range(H)]
visited = [[False] * W for _ in range(H)]
count=0
for i in range(H):
    for j in range(W):
        if S[i][j]=="." and not visited[i][j]:
            dfs(i,j)
            count+=1
print(count)


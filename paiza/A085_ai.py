def can_reach_with_one_one(H, W, MAP):
    def dfs(x, y, visited, one_passed):
        if x < 0 or x >= H or y < 0 or y >= W or MAP[x][y] == 1 or visited[x][y]:
            return False
        if x == H - 1 and y == W - 1:
            return one_passed  # ゴールに到達した場合、1を通ったかどうかを返す

        visited[x][y] = True
        # 0のマスを通る
        if dfs(x + 1, y, visited, one_passed) or dfs(x - 1, y, visited, one_passed) or \
           dfs(x, y + 1, visited, one_passed) or dfs(x, y - 1, visited, one_passed):
            return True

        # 1のマスを通る（まだ通っていない場合）
        if not one_passed and dfs(x + 1, y, visited, True) or \
           dfs(x - 1, y, visited, True) or \
           dfs(x, y + 1, visited, True) or \
           dfs(x, y - 1, visited, True):
            return True

        visited[x][y] = False
        return False

    visited = [[False] * W for _ in range(H)]
    return dfs(0, 0, visited, False)

# 入力の受け取り
H, W = map(int, input().split())
MAP = [list(map(int, input().strip())) for _ in range(H)]

# 判定
if can_reach_with_one_one(H, W, MAP):
    print("Yes")
else:
    print("No")
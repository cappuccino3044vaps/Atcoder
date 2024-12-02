def count_critical_points(matrix):
    N = len(matrix)
    M = len(matrix[0])

    # 移動方向 (上下左右)
    directions = [(-1, 0), (1, 0), (0, -1), (0, 1)]

    def is_within_bounds(x, y):
        return 0 <= x < N and 0 <= y < M

    def dfs(x, y, visited):
        stack = [(x, y)]
        while stack:
            cx, cy = stack.pop()
            for dx, dy in directions:
                nx, ny = cx + dx, cy + dy
                if is_within_bounds(nx, ny) and (nx, ny) not in visited and matrix[nx][ny] == 1:
                    visited.add((nx, ny))
                    stack.append((nx, ny))

    # 全ての1の座標を記録
    ones = [(i, j) for i in range(N) for j in range(M) if matrix[i][j] == 1]
    critical_points = 0

    for x, y in ones:
        # 一時的に (x, y) を 0 に変更
        matrix[x][y] = 0

        # 連結性を確認
        visited = set()
        for nx, ny in ones:
            if matrix[nx][ny] == 1:
                dfs(nx, ny, visited)
                break

        # 連結性が失われた場合は重要点
        if len(visited) != len(ones) - 1:
            critical_points += 1
        else:
            # 孤立確認
            for dx, dy in directions:
                nx, ny = x + dx, y + dy
                if is_within_bounds(nx, ny) and matrix[nx][ny] == 1:
                    break
            else:
                critical_points += 1

        # 元に戻す
        matrix[x][y] = 1

    return critical_points

# 使用例
matrix = [
    [1, 1, 0,1],
    [0, 1, 1,1],
    [0, 1, 1,0],
    [0,1,0,0]
]
print(count_critical_points(matrix))  # 結果を出力

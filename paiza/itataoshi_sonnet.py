import numpy as np

H, W = map(int, input().split())
Cards = [list(map(int, input().split())) for _ in range(H)]

# DPテーブルの初期化
dp = np.zeros((H, W), dtype=int)

# 最下段の初期化
dp[H-1] = Cards[H-1]

# 下から上に向かってDPテーブルを埋める
for h in range(H-2, -1, -1):
    for w in range(W):
        # 左下、真下、右下の最大値を取る
        max_value = dp[h+1][w]
        if w > 0:
            max_value = max(max_value, dp[h+1][w-1])
        if w < W-1:
            max_value = max(max_value, dp[h+1][w+1])
        dp[h][w] = Cards[h][w] + max_value

# 最上段の最大値が答え
print(np.max(dp[0]))
def generate_parentheses(n):
    if n % 2 != 0:
        return []  # Nが奇数の場合は空のリストを返す

    def backtrack(s='', left=0, right=0):
        if len(s) == n:
            result.append(s)
            return
        if left < n // 2:
            backtrack(s + '(', left + 1, right)
        if right < left:
            backtrack(s + ')', left, right + 1)

    result = []
    backtrack()
    return result

# Nを指定して実行
N = 12
for seq in generate_parentheses(N):
    print(seq)
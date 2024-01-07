def min_penalty(n, s):
    dp = [0] * (n + 1)

    for i in range(1, n + 1):
        dp[i] = dp[i - 1] + (1 if s[i - 1] == '+' else -1)

    min_penalty = 0
    min_sum = 0

    for i in range(1, n + 1):
        min_sum = min(min_sum, dp[i])
        min_penalty += dp[i] - min_sum

    return min_penalty

def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        s = input()
        result = min_penalty(n, s)
        print(result)

if __name__ == "__main__":
    main()

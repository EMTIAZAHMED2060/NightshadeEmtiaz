def is_valid_tree(n, a):
    a_sorted = sorted(enumerate(a, start=1), key=lambda x: x[1])
    
    for i in range(n - 1):
        u, d = a_sorted[i]
        v, e = a_sorted[i + 1]
        if e - d > 1:
            return "NO"
    
    return "YES"

def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))
        result = is_valid_tree(n, a)
        print(result)

if __name__ == "__main__":
    main()

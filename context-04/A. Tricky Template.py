


def match_template(n, a, b, c):
    for i in range(n):
        if a[i] == b[i]:
            if a[i] == c[i]:
                
                return "NO"
        else:
            if a[i] != c[i] and b[i] != c[i]:
                
                return "NO"

    return "YES"

def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = input().strip()
        b = input().strip()
        c = input().strip()

        result = match_template(n, a, b, c)
        print(result)

if __name__ == "__main__":
    main()

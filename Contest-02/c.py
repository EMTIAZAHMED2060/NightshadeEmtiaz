def min_penalty(n, a):
    inc_sequence = 0
    dec_sequence = 0
    inc_penalty = 0
    dec_penalty = 0

    for i in range(n):
        if i > 0 and a[i] > a[i - 1]:
            inc_sequence += 1
        else:
            inc_sequence = 1
        inc_penalty += inc_sequence - 1

        if i > 0 and a[i] < a[i - 1]:
            dec_sequence += 1
        else:
            dec_sequence = 1
        dec_penalty += dec_sequence - 1

    return min(inc_penalty, dec_penalty)

def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))
        result = min_penalty(n, a)
        print(result)

if __name__ == "__main__":
    main()

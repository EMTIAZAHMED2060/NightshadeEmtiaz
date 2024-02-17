def construct_string(n, trace):
    res = ''
    count = [0] * 26
    
    for i in trace:
        count_char = chr(i + ord('a'))
        res += count_char
    
    return res

t = int(input())
for _ in range(t):
    n = int(input())
    trace = list(map(int, input().split()))
    print(construct_string(n, trace))

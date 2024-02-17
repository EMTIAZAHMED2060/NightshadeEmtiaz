def construct_string(n, trace):
    s = ""
    for i in range(n):
        char = chr(ord('a') + trace[i])
        s += char
    return s

t = int(input())

for _ in range(t):
    n = int(input())
    v = list(map(int, input().split()))
    
    m = {}
    s = ""
    
    for c in v:
        if c not in m:
            m[c] = ['a']
            s += 'a'
        else:
            m[c].append(chr(ord(m[c][-1]) + 1))
            s += m[c][-1]
    
    print(s)

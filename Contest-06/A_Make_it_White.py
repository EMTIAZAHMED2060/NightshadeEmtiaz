def construct_string():
    n = int(input())
    s = input().strip()
    a = s.find('B')
    b = s.rfind('W')
    print(b - a + 1)

t = int(input())

for _ in range(t):
    construct_string()

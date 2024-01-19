def minimum_coins(n, cities, queries):
    left_closest = [0] * (n + 1)
    right_closest = [0] * (n + 1)

    # Calculate closest city on the left for each city
    stack = []
    for i in range(1, n + 1):
        while stack and cities[i - 1] < cities[stack[-1] - 1]:
            stack.pop()
        left_closest[i] = stack[-1] if stack else 0
        stack.append(i)

    # Calculate closest city on the right for each city
    stack = []
    for i in range(n, 0, -1):
        while stack and cities[i - 1] < cities[stack[-1] - 1]:
            stack.pop()
        right_closest[i] = stack[-1] if stack else 0
        stack.append(i)

    result = []
    for query in queries:
        x, y = query
        left_distance = abs(cities[x - 1] - cities[left_closest[x] - 1])
        right_distance = abs(cities[x - 1] - cities[right_closest[x] - 1])
        result.append(min(left_distance, right_distance) + abs(cities[x - 1] - cities[y - 1]))

    return result

def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        cities = list(map(int, input().split()))
        m = int(input())
        queries = [tuple(map(int, input().split())) for _ in range(m)]

        result = minimum_coins(n, cities, queries)
        for res in result:
            print(res)

if __name__ == "__main__":
    main()

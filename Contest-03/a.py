def satisfying_constraints(t, test_cases):
    results = []
    
    for test_case in test_cases:
        n = test_case[0]
        constraints = test_case[1:]
        
        min_val = float('-inf')
        max_val = float('inf')
        not_equal_vals = set()
        
        for constraint in constraints:
            a, x = constraint
            if a == 1:
                min_val = max(min_val, x)
            elif a == 2:
                max_val = min(max_val, x)
            elif a == 3:
                not_equal_vals.add(x)
        
        count = max(0, max_val - min_val + 1 - len(not_equal_vals))
        results.append(count)
    
    return results

# Input parsing
t = int(input())
test_cases = []

for _ in range(t):
    n = int(input())
    constraints = []
    for _ in range(n):
        a, x = map(int, input().split())
        constraints.append((a, x))
    test_cases.append([n] + constraints)

# Calculate and print results
results = satisfying_constraints(t, test_cases)
for result in results:
    print(result)

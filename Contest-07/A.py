
def max_final_score(n, nums):
 
    nums.sort()
    score = 0

    for i in range(n):
  
        score += min(nums[i], nums[i + n])
    return score

t = int(input())


for _ in range(t):

    n = int(input())
    nums = list(map(int, input().split()))

    print(max_final_score(n, nums))

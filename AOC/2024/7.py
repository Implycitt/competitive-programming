with open("../inputs/2024/7.txt", 'r') as file:
    data = file.read().splitlines()

def part1():
    ans = 0
    p = 1
    for i in data:
        res, nums = i.split(': ')
        res = int(res)
        nums = [int(x) for x in nums.split(' ')]
        if check(res, nums, p):
            ans += res
            
    print(ans)

def check(ans, n, p):
    if len(n) == 1: return n[0] == ans
    if ans % n[-1] == 0 and check(ans // n[-1], n[:-1], p): return True
    if ans > n[-1] and check(ans - n[-1], n[:-1], p): return True
    if len(str(ans)) > len(str(n[-1])) and p == 2:
        if str(ans).endswith(str(n[-1])):
            if check(int(str(ans)[:-len(str(n[-1]))]), n[:-1], p): return True
    return False

def part2():
    ans = 0
    p = 2
    for i in data:
        res, nums = i.split(': ')
        res = int(res)
        nums = [int(x) for x in nums.split(' ')]
        if check(res, nums, p):
            ans += res
            
    print(ans)

if __name__ == "__main__":
    part1()
    part2()

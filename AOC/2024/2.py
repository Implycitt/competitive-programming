with open("../inputs/2024/2.txt", 'r') as file:
    text = file.read().splitlines()

def part1():
    s = 0
    for i in text:
        nums = i.split(' ')
        diffs = all([1 <= abs(int(nums[j+1])-int(nums[j])) <= 3 for j in range(len(nums)-1)])
        inc = all(int(nums[x]) < int(nums[x+1]) for x in range(len(nums)-1))
        dec = all(int(nums[x]) > int(nums[x+1]) for x in range(len(nums)-1))

        if (diffs and inc) or (diffs and dec):
            s += 1

    print(s)

def part2():
    s = 0
    for i in text:
        nums = i.split(' ')
        s += perms(nums)

    print(s)

def perms(nums):
    copy = [i for i in nums]
    for i in range(len(nums)):
        del copy[i]

        diffs = all([1 <= abs(int(copy[j+1])-int(copy[j])) <= 3 for j in range(len(copy)-1)])
        inc = all(int(copy[x]) < int(copy[x+1]) for x in range(len(copy)-1))
        dec = all(int(copy[x]) > int(copy[x+1]) for x in range(len(copy)-1))

        if (diffs and inc) or (diffs and dec):
            return 1

        copy = [i for i in nums]
            
    return 0


if __name__ == "__main__":
    part1()
    part2()

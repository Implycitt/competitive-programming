with open("../inputs/2020/1.txt", 'r') as file:
    nums = file.read().splitlines()
    nums = [int(i) for i in nums]

def part1():
    for i in range(len(nums)):
        for j in range(len(nums)):
            if (nums[i] + nums[j]) == 2020:
                print(nums[i]*nums[j])
                return

def part2():
    for i in range(len(nums)):
        for j in range(len(nums)):
            for k in range(len(nums)):
                if (nums[i] + nums[j] + nums[k]) == 2020:
                    print(nums[i]*nums[j]*nums[k])
                    return

if __name__ == "__main__":
    part1()
    part2()

with open("../in.txt", 'r') as file:
    nums = file.read().splitlines()
    nums = [int(i) for i in nums]

def part1():
    for i in range(len(nums)):
        for j in range(len(nums)):
            if (nums[i] + nums[j]) == 2020:
                print(nums[i]*nums[j])
                break

def part2():
    for i in range(len(nums)):
        for j in range(len(nums)):
            for k in range(len(nums)):
                if (nums[i] + nums[j] + nums[k]) == 2020:
                    print(nums[i]*nums[j]*nums[k])
                    break

if __name__ == "__main__":
    part2()

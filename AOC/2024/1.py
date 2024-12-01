with open("../inputs/2024/1.txt") as file:
    text = file.read().splitlines()

def part1():
    diff = 0
    left, right = [], []
    for i in text:
        l, r = i.split('   ')
        left.append(l)
        right.append(r)
    left.sort()
    right.sort()
    for i in range(len(right)):
        diff += (abs(int(left[i]) - int(right[i])))
    print(diff)

def part2():
    s = 0
    left, right = [], []
    for i in text:
        l, r = i.split('   ')
        left.append(l)
        right.append(r)
    left.sort()
    right.sort()

    for i in left:
        s += int(i) * right.count(i)

    print(s)


if __name__ == "__main__":
    part1()
    part2()

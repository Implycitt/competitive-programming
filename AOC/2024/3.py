import re
with open("../inputs/2024/3.txt", 'r') as file:
    data = file.read().rstrip()

def part1():
    s = 0
    muls = re.findall("mul\((\d+),(\d+)\)", data)
    for a, b in muls:
        s += int(a) * int(b)

    print(s)

def part2():
    s = 0
    y = True
    muls = re.findall("(mul)\((\d+),(\d+)\)|(do)\(\)|(don)'t\(\)", data)
    for mul, a, b, do, dont in muls:
        if mul:
            if y:
                s += int(a) * int(b)
        elif do:
            y = True
        elif dont:
            y = False

    print(s)

if __name__ == "__main__":
    part1()
    part2()

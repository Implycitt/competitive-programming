with open('../inputs/2020/9.txt', 'r') as file:
    text = file.read().splitlines()

def part1():
    start = 0
    for i in range(25, len(text)-1):
        preamble, num = text[start:i], text[i]
        out = check(num, preamble)
        start += 1
        if type(out) is int:
            print(out)
            return out

def check(num, preamble):
    for i in range(len(preamble)-1):
        for j in range(i+1, len(preamble)):
            if (int(preamble[i]) + int(preamble[j]) == int(num)):
                return
    return int(num)

def part2(num):
    for i in range(2, len(text)-1):
        for j in range(len(text)-i):
            s = text[j:j+i] 
            s = [int(k) for k in s]
            if sum(s) == num:
                s.sort()
                print(s[0] + s[-1])
                return

if __name__ == "__main__":
    num = part1()
    part2(num)

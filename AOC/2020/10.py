from functools import lru_cache

with open("../inputs/2020/10.txt") as file:
    text = list(map(int, file.readlines()))
text = sorted(text + [0, max(text) + 3])

def part1():
    joltage = [0, 0]
    t = [int(i) for i in text]
    t.append(0)
    t.append(max(t)+3)
    t.sort()
    for i in range(len(t)-1): 
        diff = t[i+1]-t[i]
        if diff == 1:
            joltage[0] += 1
        elif diff == 3:
            joltage[1] += 1

    print(joltage[0]*joltage[1])

def part2():
    print(check(0))

@lru_cache(maxsize=256)
def check(i):
    if i == len(text)-1:
        return 1
    return sum([check(j) for j in range(i+1, min(i+4, len(text))) if text[j] - text[i] <= 3])

if __name__ == "__main__":
    part1()
    part2()

import math

with open("../inputs/2020/5.txt") as file:
    text = file.read().splitlines()

def part1():
    passes = []
    for p in text:
        frange = [0, 127]
        srange = [0, 7]
        for letter in p:
            fnew = (sum(frange) / 2)
            snew = (sum(srange) / 2)
            if letter == 'B':
                frange[0] = math.ceil(fnew)
            elif letter == 'F':
                frange[1] = math.floor(fnew)
            elif letter == 'R':
                srange[0] = math.ceil(snew)
            elif letter == 'L':
                srange[1] = math.floor(snew)

        passes.append(frange[1] * 8 + srange[0])
    print(max(passes))

def part2():
    passes = []
    for p in text:
        frange = [0, 127]
        srange = [0, 7]
        for letter in p:
            fnew = (sum(frange) / 2)
            snew = (sum(srange) / 2)
            if letter == 'B':
                frange[0] = math.ceil(fnew)
            elif letter == 'F':
                frange[1] = math.floor(fnew)
            elif letter == 'R':
                srange[0] = math.ceil(snew)
            elif letter == 'L':
                srange[1] = math.floor(snew)

        passes.append(frange[1] * 8 + srange[0])
    
    passes.sort()
    sr = int((passes[-1]*(passes[-1]+1)/2) - ((passes[0]-1)*(passes[0])/2))
    print(sr-sum(passes))
    
if __name__ == "__main__":
    part1()
    part2()

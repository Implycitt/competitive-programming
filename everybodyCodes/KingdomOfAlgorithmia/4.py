import math
with open("in.txt", 'r') as file:
    lengths = file.read().splitlines()
    lengths = [int(i) for i in lengths]

def part1():
    sum = 0
    m = min(lengths)
    for i in lengths:
        sum += i - m

    print(sum)

def part3():
    lengths.sort()
    upper, lower = math.ceil((len(lengths) + 1) / 2), math.floor((len(lengths) + 1) / 2)
    m, ma = lengths[0], lengths[-1]
    print()
    diff1, diff2 = (ma - lengths[upper]) - (lengths[upper] - m), (ma - lengths[lower]) - (lengths[lower] - m)  
    print(diff1, diff2)

if __name__ == "__main__":
    part3()

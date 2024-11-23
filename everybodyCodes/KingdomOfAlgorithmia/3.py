map = []
with open("test.txt", 'r') as file:
    map = [[ch] for ch in [line.strip() for line in file]]

def part1():
    flag = True
    while (flag):
        changed = 0
        newmap = []
        for y, lines in enumerate(map):
            for line in lines:
                newline = list(line)
                for x, ch in enumerate(line):
                    top = map[y+1][0][x] #this is going to out of bounds uggh
                    bottom = map[y-1][0][x]
                    left = map[y][0][x-1]
                    right = map[y][0][x+1]
                    if (ch == '#'):
                        newline[x] = 1
                        changed += 1
                    if (ch == '.'):
                        newline[x] = 0
                    # if (true):
                    #     continue
                    #     newline[x] -= 1
                    #     changed += 1
                    if changed == 0:
                        flag = False
                newmap.append(newline)
        currmap = newmap
        print(currmap)

if __name__ == "__main__":
    part1()

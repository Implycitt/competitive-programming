with open("../inputs/2024/4.txt", 'r') as file:
    data = file.read().splitlines()

def part1():
    ans = 0
    rows = len(data)
    cols = len(data[0])
    w = []
    xdirs = [-1, 0, 1]
    ydirs = [-1, 0, 1]

    for x in range(rows):
        for y in range(cols):
            for dx in xdirs:
                for dy in ydirs:
                    if dx == dy == 0: 
                        continue
                    if (0 <= x+3*dx < rows and 0 <= y+3*dy < cols):
                        w.append(data[x][y] + data[x+dx][y+dy] + data[x+2*dx][y+2*dy] + data[x+3*dx][y+3*dy])

    for i in w:
        if i == "XMAS":
            ans += 1

    print(ans)

def part2():
    ans = 0
    rows = len(data)
    cols = len(data[0])
    grids = []
    poss = ["MMASS", "MSAMS", "SSAMM", "SMASM"]

    for x in range(rows):
        for y in range(cols):
            if (x+2 < rows and y+2 < cols):
                grids.append([data[x][y], data[x][y+2]]+[data[x+1][y+1]]+[data[x+2][y], data[x+2][y+2]])
    
    for i in grids:
        cross = ''.join(i) 
        if cross in poss:
            ans += 1

    print(ans)

if __name__ == "__main__":
    part1()
    part2()

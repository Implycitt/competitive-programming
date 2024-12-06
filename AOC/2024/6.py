with open("../inputs/2024/test.txt", 'r') as file:
    data = file.read().splitlines()

def part1():
    ans = 0
    gx, gy, dir = 0, 0, 0
    dirs = [(0, -1), (1, 0), (0, 1), (-1, 0)]
    row, col = len(data), len(data[0])
    grid = [[x for x in y] for y in data]
    for i in range(row):
        for j in range(col):
            if grid[i][j] == '^':
                gy, gx = i, j

    while (0 <= gx < row and 0 <= gy < col):
        grid[gy][gx] = 'X'
        dx, dy = dirs[dir]
        if 0 <= gy+dy < row and 0 <= gx+dx < col and grid[gy+dy][gx+dx] == '#':
            dir = (dir+1)%4
            continue
        gx += dx
        gy += dy
        
    ans = sum([sum([1 if j == 'X' else 0 for j in i ]) for i in grid])
    print(ans)

def part2():
    ans = 0
    gx, gy, dir = 0, 0, 0
    dirs = [(0, -1), (1, 0), (0, 1), (-1, 0)]
    row, col = len(data), len(data[0])
    grid = [[x for x in y] for y in data]
    for i in range(row):
        for j in range(col):
            if grid[i][j] == '^':
                gy, gx = i, j

    for i in range(row):
        for j in range(col):
            if grid[i][j] == '#' or grid[i][j] == '^': continue
            grid[i][j] = '#'
            steps = 0
            while (0 <= gx < row and 0 <= gy < col or steps < row*col):
                steps += 1
                dx, dy = dirs[dir]
                if 0 <= gy+dy < row and 0 <= gx+dx < col and grid[gy+dy][gx+dx] == '#':
                    dir = (dir+1)%4
                    continue
                gx += dx
                gy += dy
            if steps >= row*col:
                ans += 1
            grid = [[x for x in y] for y in data]
            


    print(ans)

if __name__ == "__main__":
    part1()
    part2()

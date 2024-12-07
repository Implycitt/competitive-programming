with open("../inputs/2024/6.txt", 'r') as file:
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

def check(grid, r, c):
    row, col = len(data), len(data[0])
    alr = set() 

    dr, dc = -1, 0 
    while True:
        alr.add((r, c, dr, dc))
        if r+dr < 0 or r+dr >= row or c+dc < 0 or c+dc >= col: return False 
        if grid[r+dr][c+dc] == '#':
            dc, dr = -dr, dc 
        else:
            c += dc 
            r += dr 
        if ((r, c, dr, dc)) in alr:
            return True
        

def part2():
    ans = 0
    row, col = len(data), len(data[0])
    grid = [[x for x in y] for y in data]
    r, c = 0, 0
    for x in range(row):
        for y in range(col):
            if grid[x][y] == '^':
                r, c = x, y 
    
    for dr in range(row):
        for dc in range(col):
            if grid[dr][dc] != ".": continue
            grid[dr][dc] = "#"
            if check(grid, r, c):
                ans += 1
            grid[dr][dc] = "."
            
    print(ans)

if __name__ == "__main__":
    part1()
    part2()

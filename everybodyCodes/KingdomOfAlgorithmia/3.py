def part1():
    with open('input.txt', 'r') as file:
        grid = [list(i) for i in file.read().splitlines()]

    row = len(grid)
    col = len(grid[0])
    neigh = [(-1, 0), (1, 0), (0, -1), (0, 1)]
    grid = [[0 if grid[r][c] == '.' else 1 for c in range(col)] for r in range(row)]
    next = [[0 for _ in r] for r in grid]
    s = sum([sum([grid[r][c] for c in range(col)]) for r in range(row)])


    height = 2 
    while True:
        changed = False
        for r in range(row):
            for c in range(col):
                adj = [grid[r+y][c+x] for x, y in neigh if 0 <= r + y < row and 0 <= c + x < col]
                diff = 0
                for i in adj:
                    diff = max(diff, abs(int(grid[r][c] - int(i))))
                if diff < 1 and grid[r][c] != 0:
                    s += 1
                    changed = True
                    next[r][c] = height
        if not changed:
            break
        
        height += 1
        grid = [[next[r][c] for c in range(col)] for r in range(row)]

    print(s)

def part3():
    with open('input.txt', 'r') as file:
        grid = [list(i) for i in file.read().splitlines()]

    row = len(grid)
    col = len(grid[0])
    neigh = [(-1, -1), (-1, 0), (-1, 1), (0, -1), (0, 1), (1, -1), (1, 0), (1, 1)]
    grid = [[0 if grid[r][c] == '.' else 1 for c in range(col)] for r in range(row)]
    next = [[0 for _ in r] for r in grid]
    s = sum([sum([grid[r][c] for c in range(col)]) for r in range(row)])


    height = 2 
    while True:
        changed = False
        for r in range(row):
            for c in range(col):
                adj = [grid[r+y][c+x] for x, y in neigh if 0 <= r + y < row and 0 <= c + x < col]
                diff = 0
                for i in adj:
                    diff = max(diff, abs(int(grid[r][c] - int(i))))
                if diff < 1 and grid[r][c] != 0:
                    s += 1
                    changed = True
                    next[r][c] = height
        if not changed:
            break
        
        height += 1
        grid = [[next[r][c] for c in range(col)] for r in range(row)]

    print(s)

if __name__ == "__main__":
    part1()
    part3()

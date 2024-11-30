def part1():
    with open("../inputs/2020/11.txt") as file:
        grid = file.read().splitlines()
        grid = [list(i) for i in grid]

    rows = len(grid) # make variables for the rows and grid so its easier to iterate
    columns = len(grid[0])
    # create a list of the neighbours so its easier to check adjacency
    neighbours = [(-1, -1), (-1, 0), (-1, 1), (0, -1), (0, 1), (1, -1), (1, 0), (1, 1)]

    next = [['x' for c in r] for r in grid] # making a copy of the grid

    while True:
        changed = False
        for r in range(rows):
            for c in range(columns):
                # checking number of taken seats in all directions of a seat
                adj = sum([grid[r+y][c+x] == '#' 
                for x, y in neighbours if 0 <= r + y < rows and 0 <= c + x < columns])

                #now applying conditions
                if grid[r][c] == 'L' and adj == 0:
                    next[r][c] = '#'
                    changed = True
                elif grid[r][c] == '#' and adj >= 4:
                    next[r][c] = 'L'
                    changed = True
                else:
                    next[r][c] = grid[r][c]
        if not changed:
            break

        #setting the grid to the one computed from the previous loop
        grid = [[next[r][c] for c in range(columns)] for r in range(rows)]

    #pythonic way of just looping to find all occupied seats
    print(sum([sum([grid[r][c] == '#' for c in range(columns)]) for r in range(rows)]))


def part2():
    with open("../inputs/2020/11.txt") as file:
        grid = file.read().splitlines()
        grid = [list(i) for i in grid]

    rows = len(grid)
    columns = len(grid[0])
    neighbours = [(-1, -1), (-1, 0), (-1, 1), (0, -1), (0, 1), (1, -1), (1, 0), (1, 1)]

    next = [['x' for _ in r] for r in grid]

    while True:
        changed = False
        for r in range(rows):
            for c in range(columns):
                adj = 0
                for dr, dc in neighbours:
                    #initial position of the neighbors so we can keep going in each direction by adding the direction "vector"
                    x = c + dc
                    y = r + dr
                    while 0 <= x < columns and 0 <= y < rows and grid[y][x] == '.':
                        # continue down the line of sight until it reaches a seat 
                        x += dc
                        y += dr
                    if 0 <= x < columns and 0 <= y < rows and grid[y][x] == '#':
                        adj += 1

                if grid[r][c] == 'L' and adj == 0:
                    next[r][c] = '#'
                    changed = True
                elif grid[r][c] == '#' and adj >= 5:
                    next[r][c] = 'L'
                    changed = True
                else:
                    next[r][c] = grid[r][c]
        if not changed:
            break

        grid = [[next[r][c] for c in range(columns)] for r in range(rows)]

    print(sum([sum([grid[r][c] == '#' for c in range(columns)]) for r in range(rows)]))

if __name__ == "__main__":
    part1()
    part2()

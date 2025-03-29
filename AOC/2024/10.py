with open('../inputs/2024/test.txt', 'r') as file:
    data = [[int(x) for x in y] for y in file.read().splitlines()]

def part1():
    ans = 0
    row = len(data)
    col = len(data[0])
    starts, seen, surr = list(), list(), list()
    neigh = [(0, 1), (0, -1), (-1, 0), (1, 0)]

    for r in range(row):
        for c in range(col):
            if data[r][c] == 0:
                starts.append((r, c))

    while len(starts) > 0:
        for nr, nc in starts:
            surr = getNeigh((nr, nc))
            if len(surr) > 0:
                ind = 0
                while len(surr) != 0:
                    ind += 1


def getNeigh(node):
    nr, nc = node
    row = len(data)
    col = len(data[0])
    neigh = [(0, 1), (0, -1), (-1, 0), (1, 0)]
    surr = list()
    for dr, dc in neigh:
        if 0 <= nr + dr < row and 0 <= nc + dc < col and data[nr][nc]+1 == data[nr+dr][nc+dc]:
            surr.append((nr+dr, nc+dc))
    return surr

def part2():
    ans = 0

if __name__ == "__main__":
    part1()
    part2()

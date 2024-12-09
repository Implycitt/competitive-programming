with open("../inputs/2024/8.txt", 'r') as file:
    data = file.read().splitlines()

def part1():
    row = len(data)
    col = len(data[0])
    nodes = dict() 
    antinodes = set()

    for r in range(row):
        for c in range(col):
            if data[r][c] == '.': continue
            node = data[r][c]
            if node not in nodes.keys(): 
                nodes[node] = []
            nodes[node].append((c, r))

    for key in nodes:
        for x in range(len(nodes[key])):
            for y in range(x+1, len(nodes[key])):
                x1, y1 = nodes[key][x] 
                x2, y2 = nodes[key][y] 
                dy, dx = y2-y1, x2-x1
                antinode1 = (x1-dx, y1-dy)
                antinode2 = (x2+dx, y2+dy)

                if 0 <= antinode1[0] < col and 0 <= antinode1[1] < row:
                    antinodes.add(antinode1)
                if 0 <= antinode2[0] < col and 0 <= antinode2[1] < row:
                    antinodes.add(antinode2)

    print(len(antinodes))

def part2():
    row = len(data)
    col = len(data[0])
    nodes = dict() 
    antinodes = set()

    for r in range(row):
        for c in range(col):
            if data[r][c] == '.': continue
            node = data[r][c]
            if node not in nodes.keys(): 
                nodes[node] = []
            nodes[node].append((c, r))

    for array in nodes.values():
        for i in range(len(array)):
            for j in range(len(array)):
                if i == j: continue
                y1, x1 = array[i]
                y2, x2 = array[j]
                dy = y2 - y1
                dx = x2 - x1
                r, c = y1, x1
                while 0 <= r < row and 0 <= c < col:
                    antinodes.add((r, c))
                    r += dy
                    c += dx

    print(len(antinodes))

if __name__ == '__main__':
    part1()
    part2()

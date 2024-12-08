with open("../inputs/2024/test.txt", 'r') as file:
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
                nodes[node] = [(c, r)]
            else:
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
                nodes[node] = [(c, r)]
            else:
                nodes[node].append((c, r))

    grid = [[x for x in i] for i in data]
    for key in nodes:
        for x in range(len(nodes[key])):
            for y in range(x+1, len(nodes[key])):
                x1, y1 = nodes[key][x] 
                x2, y2 = nodes[key][y] 
                dy, dx = y2-y1, x2-x1
                antinode1 = (x1-dx, y1-dy)
                antinode2 = (x2+dx, y2+dy)
                
                while 0 <= antinode1[0]-dx < col and 0 <= antinode1[1]-dy < row: 
                    # print(antinode1[0]+dx, antinode1[1]+dy)
                    grid[antinode1[1]][antinode1[0]] = '#'
                    antinodes.add(antinode1)
                    antinode1 = (antinode1[0]-dx, antinode1[1]-dy)
                while 0 <= antinode2[0]+dx < col and 0 <= antinode2[1]+dy < row:
                    # print(antinode2[0]+dx, antinode2[1]+dy)
                    grid[antinode2[1]][antinode2[0]] = '#'
                    antinodes.add(antinode2)
                    antinode2 = (antinode2[0]-dx, antinode2[1]-dy)

    # for i in grid:
    #     print(i)

    print(len(antinodes))

if __name__ == '__main__':
    part1()
    part2()

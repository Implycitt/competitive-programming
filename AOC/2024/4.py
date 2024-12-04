with open("../inputs/2024/test.txt", 'r') as file:
    data = file.read().splitlines()

def part1():
    ans = 0
    rows = len(data)
    cols = len(data[0])

    for x in range(rows):
        for y in range(cols):
            w = ''
            ws = []
            if x+3 < rows and y+3 < cols:
                w = data[x][y] + data[x+1][y+1] + data[x+2][y+2] + data[x+3][y+3] 
                ws.append(w)
            if x+3 < rows and y-3 >= 0:
                w = data[x][y] + data[x-1][y-1] + data[x-2][y-2] + data[x+3][y-3] 
                ws.append(w)
            if x-3 >= 0 and y+3 < cols:
                w = data[x][y] + data[x-1][y+1] + data[x-2][y+2] + data[x-3][y+3] 
                ws.append(w)
            if x-3 >= 0 and y-3 >= 0:
                w = data[x][y] + data[x-1][y-1] + data[x-2][y-2] + data[x-3][y-3] 
                ws.append(w)
            if x < rows-3:
                w = data[x][y] + data[x+1][y] + data[x+2][y] + data[x+3][y] 
                ws.append(w)
            if x >= 0:
                w = data[x][y] + data[x-1][y] + data[x-2][y] + data[x-3][y] 
                ws.append(w)
            if y < cols-3:
                w = data[x][y] + data[x][y-1] + data[x][y+2] + data[x][y+3] 
                ws.append(w)
            if y >= 0:
                w = data[x][y] + data[x][y-1] + data[x][y-2] + data[x][y-3] 
                ws.append(w)

            for i in ws:
                if i == 'XMAS':
                    ans += 1

    print(ans)

def part2():
    ans = 0

    print(ans)

if __name__ == "__main__":
    part1()
    part2()

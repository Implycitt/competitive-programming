N, P = map(int, input().split())
fence = list()
perimeter = 0
for _ in range(P):
    x, y = map(int, input().split())
    fence.append((x,y))

label = [[-1] * 1001 for _ in range(1001)]

def walk(start, end):
    global perimeter
    assert (start[0] == end[0]) + (start[1] == end[1]) == 1
    dif = end[0] - start[0], end[1] - start[1]
    dist = abs(dif[0]) + abs(dif[1])
    dif = dif[0] // dist, dif[1] // dist
    for _ in range(dist):
        assert label[start[0]][start[1]] == -1
        label[start[0]][start[1]] = perimeter
        perimeter += 1
        start = start[0] + dif[0], start[1] + dif[1]
    assert start == end

for i in range(P):
    walk(fence[i], fence[(i+1) % P])

for _ in range(N):
    x1, y1, x2, y2 = map(int, input().split())
    p1 = label[x1][y1]
    p2 = label[x2][y2]
    dist = abs(p2 - p1)
    dist = min(dist, perimeter - dist)
    print(dist)

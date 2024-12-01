with open("../inputs/2020/12.txt") as file:
    text = file.read().splitlines()

def part1():
    dir = 0
    turns = ['E', 'N', 'W', 'S']
    actions = {'N': (1, 0), 'S': (-1, 0), 'E': (0, 1), 'W': (0, -1)}
    turn = {'R': -1, 'L': 1}

    x, y = 0, 0
    for i in text:
        instr, mag = i[0], i[1:]
        dy, dx = 0, 0
        if instr in actions:
            dy, dx = actions[instr]
        elif instr == 'F':
            dy, dx = actions[turns[dir]]
        else:
            dir += turn[instr]*int((int(mag)/90))
            dir %= 4
        x += dx*int(mag)
        y += dy*int(mag)
        
    print(abs(x) + abs(y))

def part2():
    dir = 0
    turns = ['E', 'N', 'W', 'S']
    actions = {'N': (1, 0), 'S': (-1, 0), 'E': (0, 1), 'W': (0, -1)}
    turn = {'R': -1, 'L': 1}
    rotate = {'E': (1, 1), 'N': (-1, 1), 'W': (-1, -1), 'S': (1, -1)}

    x, y = 0, 0
    wx, wy = 10, 1
    for i in text:
        instr, mag = i[0], i[1:]
        dy, dx = 0, 0
        if instr in actions:
            dy, dx = actions[instr]
            wx += dx*(int(mag))
            wy += dy*(int(mag))
        elif instr == 'F':
            x += int(mag)*wx
            y += int(mag)*wy
        else:
            for _ in range(int((int(mag)/90))):
                if instr == 'R':
                    inter = -wx
                    wx = wy
                    wy = inter
                else:
                    inter = wx
                    wx = -wy
                    wy = inter

        
    print(abs(x) + abs(y))

if __name__ == "__main__":
    part1()
    part2()

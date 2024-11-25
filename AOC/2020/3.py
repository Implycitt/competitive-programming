with open("../in.txt", 'r') as file:
    text = file.read().splitlines()
    text = [list(i) for i in text]

def part1():
    ypos, xpos, sum  = 0, 0, 0
    end = False
    endlength = len(text)
    while not end:
        m = len(text[ypos])
        xpos = (xpos + 3) % m 
        ypos += 1
        if text[ypos][xpos] == '#':
            sum += 1
        if endlength-1 == ypos:
            end = True
            print(sum)
            return

def part2():
    total = 1 
    nums = [(1, 1), (3, 1), (5, 1), (7, 1), (1, 2)]
    for i in nums:
        x, y =  i[0], i[1]
        ypos, xpos, sum  = 0, 0, 0
        end = False
        endlength = len(text)
        while not end:
            m = len(text[ypos])
            xpos = (xpos + x) % m 
            ypos += y 
            if text[ypos][xpos] == '#':
                sum += 1
            if endlength-1 == ypos:
                end = True
                total *= sum
                print(sum)
                break
    print(total)

if __name__ == "__main__":
    part2()

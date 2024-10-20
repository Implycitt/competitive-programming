with open('../input.txt', 'r') as file:
    sizes = file.readlines()

def part1():
    sum = 0
    for i in sizes:
        l, w, h = map(int, i.split('x'))
        s1 = l*w
        s2 = w*h
        s3 = h*l
        sum += 2*(s1+s2+s3)+(min(min(s1, s2), s3))

    print(sum)

def part2():
    sum = 0
    for i in sizes:
        l, w, h = map(int, i.split('x'))
        vol = l*w*h
        x = [l, w, h]
        x.sort()
        a, b = x[0], x[1]
        print(a, b)
        sum += 2*(a+b) + vol
    print(sum)

# wow this code is trash

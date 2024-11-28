with open("../inputs/2020/2.txt", 'r') as file:
    input = file.read().splitlines()

def part1():
    sum = 0
    for i in input:
        t, let, st = i.split(' ')
        t = t.split('-')
        let = let[0]
        if st.count(let) >= int(t[0]) and st.count(let) <= int(t[1]):
            sum += 1
    print(sum)

def part2():
    sum = 0
    for i in input:
        t, let, st = i.split(' ')
        t, let = [int(i) for i in t.split('-')], let[0]
        c = [list(st)[t[0]-1], list(st)[t[1]-1]]
        if c.count(let) == 1:
            sum += 1

    print(sum)

if __name__ == "__main__":
    part1()
    part2()
